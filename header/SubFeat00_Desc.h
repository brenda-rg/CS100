#include <iostream>
#include <string>
#include "../header/SubFeatList.h"

//include sql class

using namespace std;

class SubFeat00_Desc: public SubFeatList{
private:
    int desc_id;
    string desc_name = "";
    string desc = "";

public:
    //new description
    void editDesc(string new_desc);
    //new nma
    void editName(string new_name);
};

#endif