const int N_BUTTONS = 6;
const int BUTTON_PIN[N_BUTTONS] = {2, 3, 4, 5, 6, 7};
const int POT_PIN = A0;

const int trigPin = 9; 
const int echoPin = 10;  

unsigned long PTime=0;
const int auxPin=11;
const int SCALE_NUM = 6; 
const int NOTE_NUM = 21; 
int NOTE_INDEX=0;

int Notes[SCALE_NUM][NOTE_NUM] { 
{82,87,93,98,104,110,117,123,131,138,
147,156,165,175,185,196,208,220,233,247,262},
{110,117,123,131,139,147,156,165,175,185,
196,208,220,233,247,262,277,294,311,330,349}, 
{147,156,165,175,185,196,208,220,233,247,
262,277,294,311,330,349,370,392,415,440,466},
{196,208,220,233,247,262,277,294,311,330,349,370,392,415,440,466,494,523,554,587,622},
{247,262,277,294,311,330,349,370,392,415,440,466,494,523,554,587,622,659,698,740,784},
{330,349,370,392,415,440,466,494,523,554,587,622,659,698,740,784,831,880,932,988,1047}
};
int buttonCState[N_BUTTONS] = {};    
int buttonPState[N_BUTTONS] = {};       
unsigned long lastDebounceTime[N_BUTTONS] = {0}; 
unsigned long debounceDelay = 50;
unsigned long Timer = 0;
int potMin = 1023;    
int potMax = 0;         
int potVar ; 
int potVal;
int prevVal;
int noteOut;
const int varThreshold = 10; 
unsigned long loopCount;
unsigned long startTime;
long duration;
int distance;