#include <iostream>
#include <cmath>
#include <cstring>
#include <vector>
#include <string>

class Grade{

    private:
        double grade;

    public:
        Grade(double grade);
        std::vector<std::string> sections_arr;
        std::vector<double> weight_arr;
        std::vector<double> section_grades_arr;
        void Av_Grade_of_Sections(double &sum);
        void get_grade_and_weight(std::string &course);
        void clear_all();
};

int main(){


    int i = 1;
    while ( i > 0){
        double grade = 0;
        std::string course;
        std::cout << "Please enter a course: ";
        std::cin >> course;
        Grade Course(grade);
        Course.get_grade_and_weight(course);
        Course.Av_Grade_of_Sections(grade);
        std::cout << "Your grade is: ";
        std::cout << grade << std::endl;
        std::string flag;
        int j = 1;
        while (j > 0){

            std::cout << "Do you wish to enter another class (Y/N) ";
            std::cin >> flag;
            if (flag == "N" or flag == "n" or flag == "Y" or flag == "y"){
                break;
            }
            j = j + 1;
        }


        if(flag == "N" or flag == "n"){
            break;
        }

        if(flag == "Y" or flag == "y"){
            Course.clear_all();
            i = i + 1;
        }

    }

    return 0;
}
Grade::Grade(double grade){
    this-> grade = grade;
}

void Grade::get_grade_and_weight(std::string &course){
    int i = 1;

    while( i > 0){
        double weight = 0;
        double sgrade = 0;
        std::string section;
        std::cout << "Please enter a class section for ";
        std::cout << course;
        std::cout << ". (i.e exams, labs) press '/' when no more secitons are present: ";
        std::cin >> section;

        if(section == "/"){
            break;
        }

        sections_arr.push_back(section);

        std::cout << "Please enter the grade for ";
        std::cout << section;
        std::cout << " : ";
        std::cin >> sgrade;
        section_grades_arr.push_back(sgrade);

        std::cout << "Please enter the weight for ";
        std::cout << section;
        std::cout << " : ";
        std::cin >> weight;

        weight_arr.push_back(weight);
        section.clear();


        i = i + 1;

    }


}

void Grade::Av_Grade_of_Sections(double &sum){

    sum = 0;
    for(int i = 0; i < sections_arr.size(); i ++){
        int temp = 0;
        temp =  ((section_grades_arr[i]) * (weight_arr[i]/ 100));
        sum = sum + temp;
        temp = 0;
    }



}

void Grade::clear_all(){
    sections_arr.clear();
    section_grades_arr.clear();
    weight_arr.clear();
}
