##ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_SUBFEAT04_FORMITEM_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_SUBFEAT04_FORMITEM_H

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

class FormItem {
protected:
public:
    FormItem (int id, string form_name) : form_id(id), form_name (name){}
private:
    int form_id;
    string form_text; //KooalaText
};
#endif
