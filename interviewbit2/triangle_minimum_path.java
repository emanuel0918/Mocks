import java.util.ArrayList;
//cake1158@yahoo.com
public class triangle_minimum_path{

 public static void main(String args[]){

  ArrayList< ArrayList< Integer> > a= new ArrayList<>();
  ArrayList< Integer > aux;
  aux= new ArrayList<>();
  aux.add(2);
  a.add(aux);
  aux= new ArrayList<>();
  aux.add(3);
  aux.add(4);
  a.add(aux);
  aux= new ArrayList<>();
  aux.add(6);
  aux.add(5);
  aux.add(7);
  a.add(aux);
  aux= new ArrayList<>();
  aux.add(4);
  aux.add(1);
  aux.add(8);
  aux.add(3);
  a.add(aux);
  System.out.println(minimumTotal(a));
  
 }
public static int minimumTotal(ArrayList<ArrayList<Integer>> a) {
	    
	    int maxSum = Integer.MIN_VALUE ; 
	    
	    if ( a.size() == 0 ) 
	        return 0 ; 
	    if ( a.size() == 1 ) 
	        return a.get(0).get(0) ;
	    
	   
	    for ( int row = 0 ; row < a.size() - 1 ;  row++ ) { 
	          
	           int index = 0 ; 
	           for ( int i : a.get(row) ) { 
	           
	                
	                maxSum = Math.max ( maxSum, i + a.get(row+1).get(index) );
	                maxSum = Math.max ( maxSum, i + a.get(row+1).get(index+1) );
	                
	                index++ ;
	                
	           }
	    }
	    
	   return maxSum ;  
	}
}
