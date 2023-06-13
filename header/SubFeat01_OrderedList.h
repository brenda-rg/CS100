#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_ORDEREDLIST_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_ORDEREDLIST_H

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
//include sql class

using namespace std;

class SubFeat01_OrderedList : public SubFeatList {

vector<string> numeric = {"1. ", "2. ", "3. ", "4.", "5.", "6. ", "7. ", "8. ", "9. ", "10. ", "11. ", "12. ", "13. ", "14. ", "15. ", "16. ", "17. ", "18. ", "19. ", "20.", "21.", "22. ", "23. ", "24. ", "25. ", "26. ", "27. ", "28. ", "29. ", "30. ", "31. ", "32. " };
vector<string> upper_alpha = { "A.", "B.", "C. ", "D. ", "E. ", "F. ", "G. ", "H. ", "I. ", "J. ", "K." "L. ", "M. ", "N. ", "O. ", 
"P. ", "Q.", "R. ", "S. ", "T. ", "U. ", "V. ", "W. ", "X. ", "Y. ", "Z. "};
private:
    unordered_map<string style_name, vector<string>style_def>list_styles = {
        {"Numeric", numeric}; 
        {"Upper_Alpha", upper_alpha};
        }; //what i put in front of actual text, like bullet points (unordered) or 1, 2, 3 (ordered)
    //add [ X ] checkmark style on checklist, [] if empty
    string curr_style;
    vector<string>curr_style_list;
    public:

};

#endif