// chapter 3
#include <string>
#include <cctype>
#include <vector>
using namespace std;

int main(){
  // ----------------------string---------------------
  string str("some string");
  decltype(str.size()) cnt=0;
  for(auto c:str)
    cout<<c<<endl;

  for(auto &c:str)
    if(ispunct(c))
      c=toupper(c);

  if(!str.empty())
    cout<<str[0];

  char c='c';
  isalnum(c);
  isalpha(c);
  isdigit(c);
  islower(c);
  isupper(c);
  tolower(c);
  toupper(c);

  // ----------------------vector-----------------------------
  vector<int> ivec;
  vector<int> ivec2(ivec);
  vector<int> v=ivec;
  vector<string> a{"a","an","the"};
  vectort<int> ivec4(10);  // size=10021564
  string word;
  while(cin>>word)
    ivec.push_back(word);
  for(auto &e:ivec2)
    e*=2;

  vector<unsigned> scores(11,0);
  unsigned grade;
  while(cin>>grade){
    if(grade<=100)
      ++scores[grade/10];
  }

  // ----------------------iterator-----------------------------
  auto b=v.begin(),e=v.end();
  string s("hh");
  if(s.begin()!=s.end()){
    auto it=s.begin();
    *it=toupper(*it);
  }

  for(auto it=s.begin();it!=s.end()&&!isspace(*it);++it)
    *it=toupper(*it);

  auto mid=v.begin()+v.size()/2;

  auto beg=v.begin(),end=v.end();
  auto value=1;
  while(beg<end){
    auto mid=beg+(end-beg)/2;
    if(*mid==value)
      return;
    else if(*mid>value)
      end=mid;
    else
      beg=mid+1;
  }

  // ----------------------Array-----------------------------
  int a[]={1,2,3};

  unsigned scores[11]={};
  unsigned grade;
  while(cin>>grade)
    if(grade<=100)
      ++scores[grade/10];
  for(auto i:scores)
    cout<<i;

  int ia[]={0,1,2,3};
  int *beg=begin(ia);
  int *last=end(ia);
  vector<int> ivec(begin(ia),end(ia));
  vector<int> sub(ia+1,ia+4);

  int ia[3][4];
  for(const auto &row:ia)
    for(auto col:row)
      cout<<col<<endl;
}
