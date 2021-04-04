// ---------------------------------------------------------------------------

#include <vcl.h>
#include <fstream>
#include <string>
#pragma hdrstop

#include "Unit1.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

// ---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------
void __fastcall print(TObject *Sender) {
	ShowMessage(((TEdit *)Sender)->Text);
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::addingClick(TObject *Sender) {
	if (x1->Text != "" && x2->Text != "" && y1->Text != "" && y2->Text != "") {
		x3->Text = StrToInt(x1->Text) + StrToInt(x2->Text);
		y3->Text = StrToInt(y1->Text) + StrToInt(y2->Text);
		if (VectorAmount->Text == "���������� ������") {
			if (z1->Text != "" && z2->Text != "")
				z3->Text = StrToInt(z1->Text) + StrToInt(z2->Text);
			else {
				ErrorLabel->Caption = "��������� ��� ����!";
			}

		}
		if (VectorAmount->Text == "������������� ������") {
			if (z1->Text != "" && z2->Text != "")
				z3->Text = StrToInt(z1->Text) + StrToInt(z2->Text);
			else {
				ErrorLabel->Caption = "��������� ��� ����!";
			}
			if (q1->Text != "" && q2->Text != "")
				q3->Text = StrToInt(q1->Text) + StrToInt(q2->Text);
			else {
				ErrorLabel->Caption = "��������� ��� ����!";
			}
		}
		if (VectorAmount->Text == "���������� ������") {
			if (z1->Text != "" && z2->Text != "")
				z3->Text = StrToInt(z1->Text) + StrToInt(z2->Text);
			else {
				ErrorLabel->Caption = "��������� ��� ����!";
			}
			if (w1->Text != "" && w2->Text != "")
				w3->Text = StrToInt(w1->Text) + StrToInt(w2->Text);
			else {
				ErrorLabel->Caption = "��������� ��� ����!";
			}
			if (q1->Text != "" && q2->Text != "")
				q3->Text = StrToInt(q1->Text) + StrToInt(q2->Text);
			else {
				ErrorLabel->Caption = "��������� ��� ����!";
			}
		}
		ErrorLabel->Caption = "";
	}
	else {
		ErrorLabel->Caption = "��������� ��� ����!";
	}
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::subscriptionClick(TObject *Sender) {
	if (x1->Text != "" && x2->Text != "" && y1->Text != "" && y2->Text != "") {
		x3->Text = StrToInt(x1->Text) - StrToInt(x2->Text);
		y3->Text = StrToInt(y1->Text) - StrToInt(y2->Text);
		if (VectorAmount->Text == "���������� ������") {
			if (z1->Text != "" && z2->Text != "")
				z3->Text = StrToInt(z1->Text) - StrToInt(z2->Text);
			else {
				ErrorLabel->Caption = "��������� ��� ����!";
			}

		}
		if (VectorAmount->Text == "������������� ������") {
			if (z1->Text != "" && z2->Text != "")
				z3->Text = StrToInt(z1->Text) - StrToInt(z2->Text);
			else {
				ErrorLabel->Caption = "��������� ��� ����!";
			}
			if (q1->Text != "" && q2->Text != "")
				q3->Text = StrToInt(q1->Text) - StrToInt(q2->Text);
			else {
				ErrorLabel->Caption = "��������� ��� ����!";
			}
		}
		if (VectorAmount->Text == "���������� ������") {
			if (z1->Text != "" && z2->Text != "")
				z3->Text = StrToInt(z1->Text) + StrToInt(z2->Text);
			else {
				ErrorLabel->Caption = "��������� ��� ����!";
			}
			if (w1->Text != "" && w2->Text != "")
				w3->Text = StrToInt(w1->Text) - StrToInt(w2->Text);
			else {
				ErrorLabel->Caption = "��������� ��� ����!";
			}
			if (q1->Text != "" && q2->Text != "")
				q3->Text = StrToInt(q1->Text) - StrToInt(q2->Text);
			else {
				ErrorLabel->Caption = "��������� ��� ����!";
			}
		}
		ErrorLabel->Caption = "";
	}
	else {
		ErrorLabel->Caption = "��������� ��� ����!";
	}
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::scalarClick(TObject *Sender) {
	if (x1->Text != "" && x2->Text != "" && y1->Text != "" && y2->Text != "") {
		x3->Text = StrToInt(x1->Text) * StrToInt(x2->Text);
		y3->Text = StrToInt(y1->Text) * StrToInt(y2->Text);
		if (VectorAmount->Text == "���������� ������") {
			if (z1->Text != "" && z2->Text != "")
				z3->Text = StrToInt(z1->Text) * StrToInt(z2->Text);
			else {
				ErrorLabel->Caption = "��������� ��� ����!";
			}

		}
		if (VectorAmount->Text == "������������� ������") {
			if (z1->Text != "" && z2->Text != "")
				z3->Text = StrToInt(z1->Text) * StrToInt(z2->Text);
			else {
				ErrorLabel->Caption = "��������� ��� ����!";
			}
			if (q1->Text != "" && q2->Text != "")
				q3->Text = StrToInt(q1->Text) * StrToInt(q2->Text);
			else {
				ErrorLabel->Caption = "��������� ��� ����!";
			}
		}
		if (VectorAmount->Text == "���������� ������") {
			if (z1->Text != "" && z2->Text != "")
				z3->Text = StrToInt(z1->Text) * StrToInt(z2->Text);
			else {
				ErrorLabel->Caption = "��������� ��� ����!";
			}
			if (w1->Text != "" && w2->Text != "")
				w3->Text = StrToInt(w1->Text) * StrToInt(w2->Text);
			else {
				ErrorLabel->Caption = "��������� ��� ����!";
			}
			if (q1->Text != "" && q2->Text != "")
				q3->Text = StrToInt(q1->Text) * StrToInt(q2->Text);
			else {
				ErrorLabel->Caption = "��������� ��� ����!";
			}
		}
		ErrorLabel->Caption = "";
	}
	else {
		ErrorLabel->Caption = "��������� ��� ����!";
	}
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::drawClick(TObject *Sender) {
	if (VectorAmount->Text == "��������� ������" && x1->Text != "" &&
		y1->Text != "") {
		fstream coordinates_file("coords.txt", ios::out);
		coordinates_file << (StrToInt(x1->Text));
		coordinates_file << "\n";
		coordinates_file << (StrToInt(y1->Text));
		coordinates_file.close();
		system("py draw2D.py");
	}
	else if (VectorAmount->Text == "���������� ������" && x1->Text != "" &&
		y1->Text != "" && z1->Text != "") {
		fstream coordinates_file("coords.txt", ios::out);
		coordinates_file << (StrToInt(x1->Text));
		coordinates_file << "\n";
		coordinates_file << (StrToInt(y1->Text));
		coordinates_file << "\n";
		coordinates_file << (StrToInt(z1->Text));
		coordinates_file.close();
		system("py draw3D.py");
	}
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::vectorClick(TObject *Sender) {
	if (VectorAmount->Text == "���������� ������") {
		if (x1->Text != "" && y1->Text != "" && z1->Text != "" && x2->Text !=
			"" && y2->Text != "" && z2->Text != "") {
			x3->Text = IntToStr(StrToInt(y1->Text) * StrToInt(z1->Text) -
				StrToInt(y2->Text) * StrToInt(z1->Text));
			y3->Text = IntToStr(StrToInt(x2->Text) * StrToInt(z1->Text) -
				StrToInt(x1->Text) * StrToInt(z2->Text));
			z3->Text = IntToStr(StrToInt(x1->Text) * StrToInt(y2->Text) -
				StrToInt(y1->Text) * StrToInt(x2->Text));
			ErrorLabel->Caption = "";
		}
		else {
			ErrorLabel->Caption = "��������� ��� ����!";
		}
	}
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::clearClick(TObject *Sender) {
	x1->Text = "";
	y1->Text = "";
	z1->Text = "";
	q1->Text = "";
	w1->Text = "";
	x2->Text = "";
	y2->Text = "";
	z2->Text = "";
	q2->Text = "";
	w2->Text = "";
	x3->Text = "";
	y3->Text = "";
	z3->Text = "";
	q3->Text = "";
	w3->Text = "";
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::create_randomClick(TObject *Sender) {
	randomize();
	x1->Text = random(21) - 10;
	x2->Text = random(21) - 10;
	y1->Text = random(21) - 10;
	y2->Text = random(21) - 10;
	if (VectorAmount->Text == "���������� ������") {
		z1->Text = random(21) - 10;
		z2->Text = random(21) - 10;
	}
	if (VectorAmount->Text == "������������� ������") {
		z1->Text = random(21) - 10;
		z2->Text = random(21) - 10;
		q1->Text = random(21) - 10;
		q2->Text = random(21) - 10;
	}
	if (VectorAmount->Text == "���������� ������") {
		z1->Text = random(21) - 10;
		z2->Text = random(21) - 10;
		w1->Text = random(21) - 10;
		w2->Text = random(21) - 10;
		q1->Text = random(21) - 10;
		q2->Text = random(21) - 10;
	}

}
// ---------------------------------------------------------------------------

void __fastcall TForm1::x1KeyPress(TObject *Sender, System::WideChar &Key) {
	if (isdigit(Key) || (Key == VK_BACK)) {
		return;
	}

	else if ((Key == '-' || Key == '+') && (x1->Text.Length() == 0))
		return;
	if (Key == '.' || Key == ',') {

		Key = FormatSettings.DecimalSeparator;

		if (x1->Text.Pos(Key) != 0)
			Key = 0;
		else
			return;
	}
	Key = 0;
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::VectorAmountChange(TObject *Sender) {
	if (VectorAmount->Text == "��������� ������") {
		z1->Visible = false;
		z2->Visible = false;
		z3->Visible = false;
		w1->Visible = false;
		w2->Visible = false;
		w3->Visible = false;
		q1->Visible = false;
		q2->Visible = false;
		q3->Visible = false;
	}
	if (VectorAmount->Text == "���������� ������") {
		z1->Visible = true;
		z2->Visible = true;
		z3->Visible = true;
	}
	if (VectorAmount->Text == "������������� ������") {
		z1->Visible = true;
		z2->Visible = true;
		z3->Visible = true;
		q1->Visible = true;
		q2->Visible = true;
		q3->Visible = true;
	}
	if (VectorAmount->Text == "���������� ������") {
		z1->Visible = true;
		z2->Visible = true;
		z3->Visible = true;
		w1->Visible = true;
		w2->Visible = true;
		w3->Visible = true;
		q1->Visible = true;
		q2->Visible = true;
		q3->Visible = true;
	}
}
// ---------------------------------------------------------------------------
void __fastcall TForm1::FormActivate(TObject *Sender)
{
//	Form1->Top = Screen->Height/2;
//	Form1->Left = Screen->Width/2;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::clearimgClick(TObject *Sender)
{
    x1->Text = "";
	y1->Text = "";
	z1->Text = "";
	q1->Text = "";
	w1->Text = "";
	x2->Text = "";
	y2->Text = "";
	z2->Text = "";
	q2->Text = "";
	w2->Text = "";
	x3->Text = "";
	y3->Text = "";
	z3->Text = "";
	q3->Text = "";
	w3->Text = "";
}
//---------------------------------------------------------------------------

