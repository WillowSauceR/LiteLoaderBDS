//Extra Part For CommandContext.hpp
#ifdef EXTRA_INCLUDE_PART
// Include Headers or Declare Types Here


#else
// Add Member There

public:

std::string CMD;
CommandOrigin* Ori;
int Version = 10;
std::string& getCmd() {
    return CMD;
}
class CommandOrigin& getOrigin() {
    return *Ori;
}


#endif
