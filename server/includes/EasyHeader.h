#include <map>
#include <iostream>
#include <vector>
using namespace std;
class EasyHeader{
    public:
        map<string,string> Header;
        EasyHeader(string entrada);
        EasyHeader();
        string to_string();
    private:
        const vector<string> split(const string& s, const char& c);
};