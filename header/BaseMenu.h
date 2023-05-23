//
// Created by Alex on 5/17/2023.
//

#ifndef FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_BASEMENU_H
#define FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_BASEMENU_H

#include<vector>
#include<string>


class BaseMenu {
	public:
		BaseMenu(int frame_width,int frame_height);
		void setFrameSize(int frame_width, int frame_height);
		// sets the new std_width and std_height.
		// Validates that width is odd and at least size 5

		void resize();
		// Resizes current menu. Usually called in tandem with setFrameSize()

		void print();
		void addTitle();
		void addSubtitle();
		void addText();
		void addOption();
	private:
		vector<string> base_frame;


		int std_width;
		// Must be an odd number and must be larger than 7
		// Sets limit for width of text for truncation*/
		int std_height;
		// Flexible limit used when amount of text is less than the std_heigh

		int left_margin;
		int right_margin;
		int center_point;
		int left_midpoint;
		int right_midpoint;
		//Margins and midpoints are set during constructor or setFrameSize()

		vector<string> title;
		vector<string> subtitle;
		vector<vector<string>> body_text;
		vector<vector<string>> options_text;
		int body_text_limit;
		int options_text_limit;




};


#endif //FINAL_PROJECT_BROJA016_AOROZ064_ANGUY344_IKALU001_BASEMENU_H
