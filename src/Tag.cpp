#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TAG_CPP
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TAG_CPP

//also include sql class

#include "../header/Tag.h"
using namespace std;

Tag::Tag() {
    tag_id = 0
    tag_name = "";
}

Tag::Tag(string tagName) {
    tag_id = 0;
    tag_name = tagName;
}

Tag::Tag(int tagListSize, string tagName) {
    tag_id = tagId;
    tag_name = tagName;
}
//modifiers
void set_tagId(int newId) {
    tag_id = newId;
}
//accessors
string Tag::get_tag() {
    return tag_name;
}
int Tag::get_id() {
    return tag_id;
}


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_TAG_CPP
