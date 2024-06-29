//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "numguess.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
Tnumg *numg;
//-----------------------------------------------------------
bool isnumentered=false;
int guessnum,attempt=0;
__fastcall Tnumg::Tnumg(TComponent* Owner)
	: TForm(Owner)
{
			   titlelabel->Text="Please enter a number";
			   counterlabel->Text="0";
			   helperlabel->Text="";
}
//---------------------------------------------------------------------------
void __fastcall Tnumg::confrimButtonClick(TObject *Sender)
{
		if(!isnumentered){
		   guessnum=numberEdit->Text.ToInt();
		   isnumentered=true;
		   numberEdit->Text="";
		   titlelabel->Text="Now you can guess the number";
		}else{
			 int secondusernum=numberEdit->Text.ToInt();
			 if(guessnum==secondusernum){
				 helperlabel->Text="You WON!!! Congrats";
				 confrimButton->Enabled=false;
				 return;
			 }else if(guessnum<secondusernum){
				   helperlabel->Text="Number too BIG!!";
				   numberEdit->Text="";
			 }else{
					helperlabel->Text="Number too LOW!!";
                    numberEdit->Text="";
			 }
			 counterlabel->Text=++attempt;
		}
}
//---------------------------------------------------------------------------
