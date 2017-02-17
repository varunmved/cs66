/*
 * Write a description of class BetterArray here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class BetterArray
{
 
    // Fields
    private String[] arr;
    private int length;   // The "illusion" size of the array
    
    // Constructor
    public BetterArray()
    {
        arr = new String[10];
        length = 0;
    }
    
    // Methods
    // Add always adds to the end.
    // Theres a "method" to my madness. Bwahahaha!
    public void add(String s)
    {
        arr[length] = s;
        length++;
    }
    
    // Set last element to null
    // Reduce length
    public void remove()
    {
     //arr[length] = null;
     int lastLength = 0;
     lastLength = arr.length;
     arr[lastLength] = null;
     String[] arrCopy = new String[lastLength];
     
     for(int i = 0; i < lastLength; i++)
     {
         arrCopy[i] = arr[i];
     }
        
        
    }
    
    
    // Return all the elements of the array in the form
    // 0:elem0, 1:elem1, 2:elem2
     
    public String toString()
    {
        // Start with an empty string
        // Use a loop to build it up
        // Return it at the end.
        String s = "";
        for (int i = 0; i <arr.length-1 ;  i++)
        {
            s += arr[i] + ":" + ",";
        }
        s = s + arr[length];
        return s;
    }
    
    public int size()
    {
        return length;
    }
    
    // Replace element at given index with s
    // Throw exception if out of bounds
    public void set(int index, String s)
    {
        
    }
}