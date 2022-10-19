#include <iostream>
#include <cmath>
#include <cstring>
#include <vector>

double Av_Grade_of_Sections(int noa){ //(noa means NUMBER OF ASSIGNMENTS)
    double total = 0;
    for(int x = 0; x < noa;x++)
    {
        double temp = 0; //This holds the User Input before adding it to total.
        std::cin >> (temp);
        std::cout << ("\n");
        total = (total + temp);
    }
    return(total/noa);
}
int main(){
    bool flag = false;
    while (flag == false)
    {
        std::string course;
        std::cout << "Please type your first course enter \"END\" when there are no more courses: ";
        std::cin >> course;

    }
}
Course::Course(std::string &name,std::vector<std::string> Cat,std::vector<double> grades,std::vector<int> catperc){
    

}
class Course{
    public:
    Course(std::string &name,std::vector<std::string> Cat,std::vector<double> grades,std::vector<int> catperc);
    std::string Coursename;
    std::vector<std::string> catagory;
    std::vector<double> grades;
    std::vector<int> catagorypercentage;
    private:
    std::vector<double> catagorygrade;
    std::vector<double> totalgrade;
};
