
vector<int> toWave(vector<int>& array) {
  int length=array.size();
  vector <int> array2;
  //even indexes
  for(int i=0,j=0;i<length;i+=2,j++){
    array2[i]=array[j];
  }
  //odd indexes
  for(int i=1,j=length/2+1;i<length;i+=2,j++){
    array2[i]=array[j];
  }
  return arrray2;
  
}
