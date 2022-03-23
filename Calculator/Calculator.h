#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BtnSpace;
	private: System::Windows::Forms::TextBox^ TextBox;
	private: System::Windows::Forms::Button^ BtnRem;
	protected:

	protected:


	private: System::Windows::Forms::Button^ BtnClear;



	private: System::Windows::Forms::Button^ BtnPM;

	private: System::Windows::Forms::Button^ BtnD7;

	private: System::Windows::Forms::Button^ BtnD8;

	private: System::Windows::Forms::Button^ BtnD9;
	private: System::Windows::Forms::Button^ BtnPls;


	private: System::Windows::Forms::Button^ BtnD6;
	private: System::Windows::Forms::Button^ BtnD5;
	private: System::Windows::Forms::Button^ BtnD4;
	private: System::Windows::Forms::Button^ BtnMns;






	private: System::Windows::Forms::Button^ BtnD3;
	private: System::Windows::Forms::Button^ BtnD2;

	private: System::Windows::Forms::Button^ BtnD1;
	private: System::Windows::Forms::Button^ BtnMult;




	private: System::Windows::Forms::Button^ BtnD0;
	private: System::Windows::Forms::Button^ BtnDot;

	private: System::Windows::Forms::Button^ BtnEz;
	private: System::Windows::Forms::Button^ BtnDivi;










	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->BtnSpace = (gcnew System::Windows::Forms::Button());
			this->TextBox = (gcnew System::Windows::Forms::TextBox());
			this->BtnRem = (gcnew System::Windows::Forms::Button());
			this->BtnClear = (gcnew System::Windows::Forms::Button());
			this->BtnPM = (gcnew System::Windows::Forms::Button());
			this->BtnD7 = (gcnew System::Windows::Forms::Button());
			this->BtnD8 = (gcnew System::Windows::Forms::Button());
			this->BtnD9 = (gcnew System::Windows::Forms::Button());
			this->BtnPls = (gcnew System::Windows::Forms::Button());
			this->BtnD6 = (gcnew System::Windows::Forms::Button());
			this->BtnD5 = (gcnew System::Windows::Forms::Button());
			this->BtnD4 = (gcnew System::Windows::Forms::Button());
			this->BtnMns = (gcnew System::Windows::Forms::Button());
			this->BtnD3 = (gcnew System::Windows::Forms::Button());
			this->BtnD2 = (gcnew System::Windows::Forms::Button());
			this->BtnD1 = (gcnew System::Windows::Forms::Button());
			this->BtnMult = (gcnew System::Windows::Forms::Button());
			this->BtnD0 = (gcnew System::Windows::Forms::Button());
			this->BtnDot = (gcnew System::Windows::Forms::Button());
			this->BtnEz = (gcnew System::Windows::Forms::Button());
			this->BtnDivi = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// BtnSpace
			// 
			this->BtnSpace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnSpace->Location = System::Drawing::Point(26, 72);
			this->BtnSpace->Name = L"BtnSpace";
			this->BtnSpace->Size = System::Drawing::Size(80, 80);
			this->BtnSpace->TabIndex = 0;
			this->BtnSpace->Text = L"DEL";
			this->BtnSpace->UseVisualStyleBackColor = true;
			this->BtnSpace->Click += gcnew System::EventHandler(this, &Calculator::buttonDel);
			// 
			// TextBox
			// 
			this->TextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextBox->Location = System::Drawing::Point(26, 12);
			this->TextBox->Multiline = true;
			this->TextBox->Name = L"TextBox";
			this->TextBox->Size = System::Drawing::Size(347, 54);
			this->TextBox->TabIndex = 1;
			this->TextBox->Text = L"0";
			this->TextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TextBox->TextChanged += gcnew System::EventHandler(this, &Calculator::textBox1_TextChanged);
			// 
			// BtnRem
			// 
			this->BtnRem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnRem->Location = System::Drawing::Point(115, 72);
			this->BtnRem->Name = L"BtnRem";
			this->BtnRem->Size = System::Drawing::Size(80, 80);
			this->BtnRem->TabIndex = 0;
			this->BtnRem->Text = L"C";
			this->BtnRem->UseVisualStyleBackColor = true;
			this->BtnRem->Click += gcnew System::EventHandler(this, &Calculator::buttonClear);
			// 
			// BtnClear
			// 
			this->BtnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnClear->Location = System::Drawing::Point(204, 72);
			this->BtnClear->Name = L"BtnClear";
			this->BtnClear->Size = System::Drawing::Size(80, 80);
			this->BtnClear->TabIndex = 0;
			this->BtnClear->Text = L"CE";
			this->BtnClear->UseVisualStyleBackColor = true;
			this->BtnClear->Click += gcnew System::EventHandler(this, &Calculator::buttonClearEntry);
			// 
			// BtnPM
			// 
			this->BtnPM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnPM->Location = System::Drawing::Point(293, 72);
			this->BtnPM->Name = L"BtnPM";
			this->BtnPM->Size = System::Drawing::Size(80, 80);
			this->BtnPM->TabIndex = 0;
			this->BtnPM->Text = L"±";
			this->BtnPM->UseVisualStyleBackColor = true;
			this->BtnPM->Click += gcnew System::EventHandler(this, &Calculator::buttonPlusMinus);
			// 
			// BtnD7
			// 
			this->BtnD7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnD7->Location = System::Drawing::Point(26, 158);
			this->BtnD7->Name = L"BtnD7";
			this->BtnD7->Size = System::Drawing::Size(80, 80);
			this->BtnD7->TabIndex = 0;
			this->BtnD7->Text = L"7";
			this->BtnD7->UseVisualStyleBackColor = true;
			this->BtnD7->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// BtnD8
			// 
			this->BtnD8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnD8->Location = System::Drawing::Point(115, 158);
			this->BtnD8->Name = L"BtnD8";
			this->BtnD8->Size = System::Drawing::Size(80, 80);
			this->BtnD8->TabIndex = 0;
			this->BtnD8->Text = L"8";
			this->BtnD8->UseVisualStyleBackColor = true;
			this->BtnD8->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// BtnD9
			// 
			this->BtnD9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnD9->Location = System::Drawing::Point(204, 158);
			this->BtnD9->Name = L"BtnD9";
			this->BtnD9->Size = System::Drawing::Size(80, 80);
			this->BtnD9->TabIndex = 0;
			this->BtnD9->Text = L"9";
			this->BtnD9->UseVisualStyleBackColor = true;
			this->BtnD9->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// BtnPls
			// 
			this->BtnPls->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnPls->Location = System::Drawing::Point(293, 158);
			this->BtnPls->Name = L"BtnPls";
			this->BtnPls->Size = System::Drawing::Size(80, 80);
			this->BtnPls->TabIndex = 0;
			this->BtnPls->Text = L"+";
			this->BtnPls->UseVisualStyleBackColor = true;
			this->BtnPls->Click += gcnew System::EventHandler(this, &Calculator::EnterOperator);
			// 
			// BtnD6
			// 
			this->BtnD6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnD6->Location = System::Drawing::Point(26, 244);
			this->BtnD6->Name = L"BtnD6";
			this->BtnD6->Size = System::Drawing::Size(80, 80);
			this->BtnD6->TabIndex = 0;
			this->BtnD6->Text = L"6";
			this->BtnD6->UseVisualStyleBackColor = true;
			this->BtnD6->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// BtnD5
			// 
			this->BtnD5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnD5->Location = System::Drawing::Point(115, 244);
			this->BtnD5->Name = L"BtnD5";
			this->BtnD5->Size = System::Drawing::Size(80, 80);
			this->BtnD5->TabIndex = 0;
			this->BtnD5->Text = L"5";
			this->BtnD5->UseVisualStyleBackColor = true;
			this->BtnD5->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// BtnD4
			// 
			this->BtnD4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnD4->Location = System::Drawing::Point(204, 244);
			this->BtnD4->Name = L"BtnD4";
			this->BtnD4->Size = System::Drawing::Size(80, 80);
			this->BtnD4->TabIndex = 0;
			this->BtnD4->Text = L"4";
			this->BtnD4->UseVisualStyleBackColor = true;
			this->BtnD4->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// BtnMns
			// 
			this->BtnMns->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnMns->Location = System::Drawing::Point(293, 244);
			this->BtnMns->Name = L"BtnMns";
			this->BtnMns->Size = System::Drawing::Size(80, 80);
			this->BtnMns->TabIndex = 0;
			this->BtnMns->Text = L"-";
			this->BtnMns->UseVisualStyleBackColor = true;
			this->BtnMns->Click += gcnew System::EventHandler(this, &Calculator::EnterOperator);
			// 
			// BtnD3
			// 
			this->BtnD3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnD3->Location = System::Drawing::Point(26, 330);
			this->BtnD3->Name = L"BtnD3";
			this->BtnD3->Size = System::Drawing::Size(80, 80);
			this->BtnD3->TabIndex = 0;
			this->BtnD3->Text = L"3";
			this->BtnD3->UseVisualStyleBackColor = true;
			this->BtnD3->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// BtnD2
			// 
			this->BtnD2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnD2->Location = System::Drawing::Point(115, 330);
			this->BtnD2->Name = L"BtnD2";
			this->BtnD2->Size = System::Drawing::Size(80, 80);
			this->BtnD2->TabIndex = 0;
			this->BtnD2->Text = L"2";
			this->BtnD2->UseVisualStyleBackColor = true;
			this->BtnD2->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// BtnD1
			// 
			this->BtnD1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnD1->Location = System::Drawing::Point(204, 330);
			this->BtnD1->Name = L"BtnD1";
			this->BtnD1->Size = System::Drawing::Size(80, 80);
			this->BtnD1->TabIndex = 0;
			this->BtnD1->Text = L"1";
			this->BtnD1->UseVisualStyleBackColor = true;
			this->BtnD1->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// BtnMult
			// 
			this->BtnMult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnMult->Location = System::Drawing::Point(293, 330);
			this->BtnMult->Name = L"BtnMult";
			this->BtnMult->Size = System::Drawing::Size(80, 80);
			this->BtnMult->TabIndex = 0;
			this->BtnMult->Text = L"*";
			this->BtnMult->UseVisualStyleBackColor = true;
			this->BtnMult->Click += gcnew System::EventHandler(this, &Calculator::EnterOperator);
			// 
			// BtnD0
			// 
			this->BtnD0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnD0->Location = System::Drawing::Point(26, 416);
			this->BtnD0->Name = L"BtnD0";
			this->BtnD0->Size = System::Drawing::Size(80, 80);
			this->BtnD0->TabIndex = 0;
			this->BtnD0->Text = L"0";
			this->BtnD0->UseVisualStyleBackColor = true;
			this->BtnD0->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// BtnDot
			// 
			this->BtnDot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnDot->Location = System::Drawing::Point(115, 416);
			this->BtnDot->Name = L"BtnDot";
			this->BtnDot->Size = System::Drawing::Size(80, 80);
			this->BtnDot->TabIndex = 0;
			this->BtnDot->Text = L".";
			this->BtnDot->UseVisualStyleBackColor = true;
			this->BtnDot->Click += gcnew System::EventHandler(this, &Calculator::EnterDot);
			// 
			// BtnEz
			// 
			this->BtnEz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnEz->Location = System::Drawing::Point(204, 416);
			this->BtnEz->Name = L"BtnEz";
			this->BtnEz->Size = System::Drawing::Size(80, 80);
			this->BtnEz->TabIndex = 0;
			this->BtnEz->Text = L"=";
			this->BtnEz->UseVisualStyleBackColor = true;
			this->BtnEz->Click += gcnew System::EventHandler(this, &Calculator::BtnEZZ);
			// 
			// BtnDivi
			// 
			this->BtnDivi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnDivi->Location = System::Drawing::Point(293, 416);
			this->BtnDivi->Name = L"BtnDivi";
			this->BtnDivi->Size = System::Drawing::Size(80, 80);
			this->BtnDivi->TabIndex = 0;
			this->BtnDivi->Text = L"/";
			this->BtnDivi->UseVisualStyleBackColor = true;
			this->BtnDivi->Click += gcnew System::EventHandler(this, &Calculator::EnterOperator);
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(396, 514);
			this->Controls->Add(this->TextBox);
			this->Controls->Add(this->BtnDivi);
			this->Controls->Add(this->BtnMult);
			this->Controls->Add(this->BtnMns);
			this->Controls->Add(this->BtnPls);
			this->Controls->Add(this->BtnPM);
			this->Controls->Add(this->BtnEz);
			this->Controls->Add(this->BtnD1);
			this->Controls->Add(this->BtnD4);
			this->Controls->Add(this->BtnD9);
			this->Controls->Add(this->BtnClear);
			this->Controls->Add(this->BtnDot);
			this->Controls->Add(this->BtnD0);
			this->Controls->Add(this->BtnD2);
			this->Controls->Add(this->BtnD3);
			this->Controls->Add(this->BtnD5);
			this->Controls->Add(this->BtnD6);
			this->Controls->Add(this->BtnD8);
			this->Controls->Add(this->BtnD7);
			this->Controls->Add(this->BtnRem);
			this->Controls->Add(this->BtnSpace);
			this->Name = L"Calculator";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &Calculator::Calculator_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstDigit, secondDigit, result;
		String^ operators;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Calculator_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
	
	Button^ Numbers = safe_cast<Button^>(sender);

	if (TextBox-> Text == "0")
	{
		TextBox->Text = Numbers->Text;
	}
	else
	{
		TextBox->Text = TextBox->Text + Numbers->Text;
	}
}

private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {

	Button^ NumbersOp = safe_cast<Button^>(sender);
	
	firstDigit = double::Parse(TextBox->Text);
	TextBox->Text = "";
	operators = NumbersOp->Text;
}
private: System::Void EnterDot(System::Object^ sender, System::EventArgs^ e) {

	if (!TextBox->Text->Contains("."))
	{
		TextBox->Text = TextBox->Text + ".";
	}
}
private: System::Void BtnEZZ(System::Object^ sender, System::EventArgs^ e) {

	secondDigit = double::Parse(TextBox->Text);

	if (operators == "+")
	{
		result = firstDigit + secondDigit;
		TextBox->Text = System::Convert::ToString(result);
	}
	else if (operators == "-")
	{
		result = firstDigit - secondDigit;
		TextBox->Text = System::Convert::ToString(result);
	}

	else if (operators == "*")
	{
		result = firstDigit * secondDigit;
		TextBox->Text = System::Convert::ToString(result);
	}
	else if (operators == "/")
	{
		result = firstDigit / secondDigit;
		TextBox->Text = System::Convert::ToString(result);
	}
}
private: System::Void buttonClear(System::Object^ sender, System::EventArgs^ e) {

	TextBox->Text = "0";
}
private: System::Void buttonClearEntry(System::Object^ sender, System::EventArgs^ e) {
	
	TextBox->Text = "0";
}
private: System::Void buttonPlusMinus(System::Object^ sender, System::EventArgs^ e) {

	if (TextBox->Text->Contains("-"))
	{
		TextBox->Text = TextBox->Text->Remove(0, 1);
	}
	else
	{
		TextBox->Text = "-" + TextBox->Text;
	}
}
private: System::Void buttonDel(System::Object^ sender, System::EventArgs^ e) {

	if (TextBox->Text->Length > 0)
	{
		TextBox->Text = TextBox->Text->Remove(TextBox->Text->Length > - 1, 1);
	}
	if (TextBox->Text == "")
	{
		TextBox->Text = "0";
	}
}
};
}
