class Solution {
    public int maxArea(int[] height) {
     int i=0,j=0,w1=0,w=0;
     for(i=0;i<height.length;i++)
     {
         for(j=0;j<height.length;j++)
         {
             if(height[i]>height[j])
             w=Math.abs(i-j)*height[j];
             else
             w=Math.abs(i-j)*height[i];
             if(w>w1)
             w1=w;
         }
     }   
     return w1;
    }
}
