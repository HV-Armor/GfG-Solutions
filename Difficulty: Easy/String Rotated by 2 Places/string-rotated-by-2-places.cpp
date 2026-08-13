class Solution {
  public:
  
  void rotateclockwise(string &s){
      char c= s[s.size()-1];
      int i= s.size()-2;
      while(i>=0){
          s[i+1]=s[i];
          i--;
      }
      s[0]=c;
  }
  
  void rotateanticlockwise(string &s){
      char c= s[0];
      int i= 1;
      while(i<=s.size()){
          s[i-1]=s[i];
          i++;
      }
      s[s.size()-1]=c;
  }
    bool isRotated(string& s1, string& s2) {
        // code here
        if(s1.size()!=s2.size())
        return 0;
        string clockwise,anticlockwise;
        
        clockwise=s1;
        rotateclockwise(clockwise);
        rotateclockwise(clockwise);
        
        if(clockwise==s2)
        return 1;
        
        anticlockwise=s1;
        rotateanticlockwise(anticlockwise);
        rotateanticlockwise(anticlockwise);
        
        if(anticlockwise==s2)
        return 1;
        
        return 0;
    }
};
