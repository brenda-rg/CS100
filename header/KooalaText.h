//
// Created by Alex on 5/19/2023.
//

#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_KOOALATEXT_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_KOOALATEXT_H

#include<string>
#include<vector>

using namespace std;

class KooalaText {
	private:
		KooalaText();
		explicit KooalaText(string text);
		string text;
		string prepend;
	public:

		// Changes text value
		void setText(string new_val);

		// Changes prepend value. Prepend should not be larger than size 5
		void setPrepend(string new_val);

		// returns just the text val
		string getText();

		// Returns the full prepend + text as a string
		string getString();

		// returns the prepend + text truncated at the width limit. (Removes n-3 text at the end of the string)
		string getTrunc(int width_limit);

		// returns the prepend + text continued onto the next line (removes n-1 text)
		vector<string> getCont(int width_limit);

};


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_KOOALATEXT_H
