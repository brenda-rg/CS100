#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_SUBFEAT04_FORM_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_SUBFEAT04_FORM_H

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include "../header/FormItem.h"
//include sql class

using namespace std;

class SubFeat04_Form : public TaskSubFeatBase {
    protected:
        vector<FormItem>subformForms;
    public:
        //void changeCollectionName();
        void addFormItem(int, string);
        SubFeat04_Form(int form_id, string formName, string form_collection_name) : form_id (id) , form_name(name),  form_collection_name (coll_name);
    private:
        int form_id;
        string form_name;
        string form_collection_name;
};




//constructor: collection name




#endif