#ifndef STUD_H_INCLUDED
#define STUD_H_INCLUDED

#include "Mylib.h"

struct Stud {
    string name, surname;
    vector<double> HW;
    double avg, exam, med;
};

void input(Stud &Lok, int hwCount);
void inputgrades(Stud &Lok);
void inputnull(Stud &Lok);
void readfile(const string &line, Stud &Lok);
void randomgrades(Stud &Lok, int hwCount);
void outputnull(Stud Lok);
void outputfile(ofstream &outfile, Stud Lok);
void outputavg(Stud Lok);
void outputmed(Stud Lok);
void clean(Stud &Lok);
void printHeaderfile(ofstream &outfile);
void printHeaderavg();
void printHeadermed();
void printHeadernull();
double calculateMedian(vector<double>& grades);
void sortsurname(vector<Stud> &students);
void filegeneration(const string &file, int numEntries, int numND, vector<Stud> &Vec1);
void filterstudents(const string& inputfile, const string& below5, const string& above5, vector<Stud> &Vec1);

#endif // STUD_H_INCLUDED
