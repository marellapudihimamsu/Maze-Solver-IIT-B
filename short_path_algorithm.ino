char m[]="LULLLULULULLLULULULLLULULULLL";
int k=2;
int i=0;
int n;
int ic=0;
void setup() {
  // put your setup code here, to run once:
      Serial.begin(9600);
}

void loop() 
{
  for (ic=0;ic<100;ic++)
  {
  for(n=0;m[n]!='\0';n++)
  {
    Serial.print("            ");
   Serial.print(m[n]);
    }
    n=n+1;
    
  if(k!=0)
  {
        k=0;
        i=0;
        while(m[i]!='\0')
        {
              if(m[i+1]=='U')
               {   reeplace();
                  
               }
              else
                  i=i+1;        
          }    
    }
     Serial.println("_____________________");
          Serial.println();
        for(int j=0;m[j]!='\0';j++)
                    {
                        Serial.print(m[j]);
                    }
                    Serial.println("______________________________");
                   
  }
                    delay(50000);
                    
}
void reeplace(void )
{     int o;
       if(m[i]=='L'&&m[i+1]=='U'&&m[i+2]=='R')
       o=1;
       if(m[i]=='R'&&m[i+1]=='U'&&m[i+2]=='L')
       o=2;
       if(m[i]=='S'&&m[i+1]=='U'&&m[i+2]=='L')
       o=3;
       if(m[i]=='L'&&m[i+1]=='U'&&m[i+2]=='L')
       o=4;
       if(m[i]=='R'&&m[i+1]=='U'&&m[i+2]=='R')
       o=5;
       if(m[i]=='S'&&m[i+1]=='U'&&m[i+2]=='R')
       o=6;
       if(m[i]=='L'&&m[i+1]=='U'&&m[i+2]=='S')
       o=7;
       if(m[i]=='R'&&m[i+1]=='U'&&m[i+2]=='S')
       o=8;
       if(m[i]=='S'&&m[i+1]=='U'&&m[i+2]=='S')
       o=9;
      
       switch(o)
       {
          case 1 :
               m[i]= 'U' ; 
               shift();     
               k++;
              break;
           case  2:
               m[i]= 'U' ; 
               shift();     
               k++;
              break;
            case  3:
               m[i]=  'R'; 
               shift();     
          
              break;
            case  4:
               m[i]='S'  ; 
               shift();     
         
              break;
            case 5 :
               m[i]='S'  ; 
               shift();     
            
              break;
            case  6:
               m[i]=  'L'; 
               shift();     
            
              break;
            case  7:
               m[i]= 'R' ; 
               shift();     
           
              break;
              case  8:
               m[i]= 'L' ; 
               shift();     
            
              break;
              case  9:
               m[i]= 'U' ; 
               shift();     
              k++;
              break;
              }
 }
void shift(void)
{
      for(int e=i+1;e<=n-2;e++) 
      {
        m[e]=m[e+2];       
        }  
}

 
