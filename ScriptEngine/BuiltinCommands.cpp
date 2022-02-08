#include "BuiltinCommands.h"
#include <API/APIHelp.h>
#include <Tools/Utils.h>
#include <Utils/StringHelper.h>
#include <Engine/LoaderHelper.h>
#include <Engine/MessageSystem.h>
#include <Engine/GlobalShareData.h>
#include <Engine/OperationCount.h>
#include <Utils/StringHelper.h>
#include <PluginManager.h>
#include <Utils/Hash.h>
#include <Configs.h>
#include <Version.h>
#include <string>
#include <thread>
using namespace std;
#define H do_hash


#define FIX_OLD_COMMAND(OLDCMD,NEWCMD)\
    if (StartsWith(cmd, OLDCMD)) \
    { \
        logger.warn(R"(* Please use command ")" #NEWCMD R"(" instead.)"); \
        cmd.replace(0, 3, "ll"); \
    }

bool ProcessHotManageCmd(std::string& cmd)
{
    FIX_OLD_COMMAND("lxl list", "ll list");
    FIX_OLD_COMMAND("lxl load", "ll load");
    FIX_OLD_COMMAND("lxl unload", "ll unload");
    FIX_OLD_COMMAND("lxl reload", "ll reload");
    FIX_OLD_COMMAND("lxl version", "ll version");
    FIX_OLD_COMMAND("lxl update", "ll upgrade");

    if (cmd.find("ll ") != 0)
        return true;

    auto cmdList = SplitCmdLine(cmd);
    if (cmdList.size() <= 1)
    {
        logger.error("Command not found! Check your input again.");
        return false;
    }

    switch (H(cmdList[1].c_str()))
    {
    case H("version"):
        //logger.info("LiteLoader-ScriptEngine-{} v{}", LLSE_BACKEND_TYPE, LLSE_VERSION.toString());
        break;

    case H("list"):
    {
        /*logger.info("=== LiteLoader-ScriptEngine-{} Plugins ===", LLSE_BACKEND_TYPE);
        auto list = LxlListLocalAllPlugins();
        for (auto& name : list)
            logger.info("{}", name);*/
        break;
    }
    
    case H("load"):
    {
        if (cmdList.size() == 3)
        {
            string path = cmdList[2];
            if (filesystem::path(path).extension().u8string() != LLSE_PLUGINS_EXTENSION)
                return true;
            if (PluginManager::loadPlugin(path, true, true))
                cmd += LLSE_COMMAND_FINISHED_SUFFIX;
        }
        else
            logger.error("Bad Command! Check your input again.");
        break;
    }

    case H("unload"):
    {
        if (cmdList.size() == 3)
        {
            if(!PluginManager::unloadPlugin(cmdList[2]))
                cmd += LLSE_COMMAND_FINISHED_SUFFIX;
        }
        else
            logger.error("Bad Command! Check your input again.");
        break;
    }

    case H("reload"):
    {
        if (cmdList.size() == 3)
        {
            //Reload specific plugin
            if (PluginManager::reloadPlugin(cmdList[2]))
                cmd += LLSE_COMMAND_FINISHED_SUFFIX;
        }
        else
        {
            //Reload All
            PluginManager::reloadAllPlugins();
            logger.info("All plugins reloaded.");
        }
        break;
    }

    default:
        logger.error("Command not found! Check your input again.");
        break;
    }
    return true;
}