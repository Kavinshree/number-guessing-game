//---------------------------------------------------------------------------

#ifndef numguessH
#define numguessH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class Tnumg : public TForm
{
__published:	// IDE-managed Components
	TLabel *titlelabel;
	TButton *confrimButton;
	TLabel *helperlabel;
	TLabel *counterlabel;
	TEdit *numberEdit;
	void __fastcall confrimButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall Tnumg(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tnumg *numg;
//---------------------------------------------------------------------------
#endif
