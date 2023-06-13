#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_SUBFEATURE02_UNORDEREDLIST_H

#include <iostream>
#include <string>
//include sql class

using namespace std;

class SubFeat02_UnorderedList : public SubFeatList  {
private:
    unordered_map<string style_name, string style_def>list_styles = {
        {"Bullet", "* "}; 
        {"Line", "- "};
        //{}, ""}
        };
    string curr_style;
};