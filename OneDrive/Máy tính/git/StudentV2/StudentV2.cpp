﻿#include "Student.h"

int main()
{
	Student s1; // test tạo hàm không đối
	s1.output();
	Student s2("Nguyen", "Van", "An Binh");	//test tạo hàm có đối số
	s2.output();
	Student* s3 = new Student("Tran", "", "An");
	s3->output();
	s1.setFirstName("Vy");	//test setter
	s1.setMiddleName("Pham Thanh");
	s1.setLastName("Nguyen");
	s1.output();
	string s3plus = s3->Fullname();
	cout << s3plus << endl;
	Student s4("Vu");
	s4.output();
	Student s5(s2);
	s5.output();
	delete s3;
}

