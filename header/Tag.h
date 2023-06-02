#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TAG_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TAG_H

//also include sql class

#include "string"
#include <iostream>
using namespace std;

class Tag {
        protected:
        int tag_id;
        string tag_name;

        public:
        //constuctors
        Tag();
        Tag(string);
        Tag(int , string);
        //modifiers
        //void set_tag(string);
        void set_tagId(int);
        //accessors
        string get_tag();
        int get_id();

};


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TAG_CPP
