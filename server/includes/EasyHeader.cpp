#include "EasyHeader.h"

const vector<string> EasyHeader::split(const string& s, const char& c){
    string buff{""};vector<string> v;
	for(auto n:s){if(n != c) buff+=n; else if(n == c && buff != "") { v.push_back(buff); buff = ""; }}if(buff != "") v.push_back(buff);
	return v;
}

EasyHeader::EasyHeader(string entrada){
    const vector<string> temp = EasyHeader::split(entrada,'\n');
    vector<string> temp2 = EasyHeader::split(temp[0],' ');
    this->Header["Method"] = temp2[0];
    this->Header["Path"] = temp2[1];
    this->Header["Version"] = temp2[2];
    for(int i=1;i<temp.size();i++){
        temp2.clear();
        temp2 = EasyHeader::split(temp[i],':');
        if(temp2.size()==3){
            this->Header[temp2[0]]=temp2[1]+":"+temp2[2];
        }else{
            this->Header[temp2[0]]=temp2[1];
        }
    }
}
EasyHeader::EasyHeader() {
    return;
}
string EasyHeader::to_string(){
    string x="";
    for(map<string,string>::iterator it=this->Header.begin();it!=this->Header.end();it++){
        x+=(*it).first+": "+(*it).second+"\n";
    }
    x+="\n";
    return x;
}