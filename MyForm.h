﻿#pragma once

#include <iostream>
#include <string>

namespace Project3
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>

	template<class T>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		public:
			MyForm(void)
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
			~MyForm()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::Button^ button1;
		protected:
		private: System::Windows::Forms::Button^ button2;
		private: System::Windows::Forms::Button^ button3;
		private: System::Windows::Forms::Button^ button4;
		private: System::Windows::Forms::Button^ button5;
		private: System::Windows::Forms::Button^ button6;
		private: System::Windows::Forms::Button^ button7;
		private: System::Windows::Forms::Button^ button8;
		private: System::Windows::Forms::Button^ button9;
		private: System::Windows::Forms::Button^ button10;
		private: System::Windows::Forms::Button^ button11;
		private: System::Windows::Forms::Button^ button12;
		private: System::Windows::Forms::Button^ button13;
		private: System::Windows::Forms::Button^ button14;
		private: System::Windows::Forms::Button^ button15;
		private: System::Windows::Forms::Button^ button16;
		private: System::Windows::Forms::Button^ button17;
		private: System::Windows::Forms::Button^ button18;
		private: System::Windows::Forms::Button^ button19;
		private: System::Windows::Forms::Button^ button20;
		private: System::Windows::Forms::Button^ button21;
		private: System::Windows::Forms::Button^ button22;
		private: System::Windows::Forms::Button^ button23;
		private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Label^ lblDisplay;

		protected:

		private:
			/// <summary>
			/// Required designer variable.
			/// </summary>
			System::ComponentModel::Container^ components;

	#pragma region Windows Form Designer generated code
			/// <summary>
			/// Required method for Designer support - do not modify
			/// the contents of this method with the code editor.
			/// </summary>
			void InitializeComponent(void)
			{
				this->button1 = (gcnew System::Windows::Forms::Button());
				this->button2 = (gcnew System::Windows::Forms::Button());
				this->button3 = (gcnew System::Windows::Forms::Button());
				this->button4 = (gcnew System::Windows::Forms::Button());
				this->button5 = (gcnew System::Windows::Forms::Button());
				this->button6 = (gcnew System::Windows::Forms::Button());
				this->button7 = (gcnew System::Windows::Forms::Button());
				this->button8 = (gcnew System::Windows::Forms::Button());
				this->button9 = (gcnew System::Windows::Forms::Button());
				this->button10 = (gcnew System::Windows::Forms::Button());
				this->button11 = (gcnew System::Windows::Forms::Button());
				this->button12 = (gcnew System::Windows::Forms::Button());
				this->button13 = (gcnew System::Windows::Forms::Button());
				this->button14 = (gcnew System::Windows::Forms::Button());
				this->button15 = (gcnew System::Windows::Forms::Button());
				this->button16 = (gcnew System::Windows::Forms::Button());
				this->button17 = (gcnew System::Windows::Forms::Button());
				this->button18 = (gcnew System::Windows::Forms::Button());
				this->button19 = (gcnew System::Windows::Forms::Button());
				this->button20 = (gcnew System::Windows::Forms::Button());
				this->button21 = (gcnew System::Windows::Forms::Button());
				this->button22 = (gcnew System::Windows::Forms::Button());
				this->button23 = (gcnew System::Windows::Forms::Button());
				this->button24 = (gcnew System::Windows::Forms::Button());
				this->lblDisplay = (gcnew System::Windows::Forms::Label());
				this->SuspendLayout();
				// 
				// button1
				// 
				this->button1->Location = System::Drawing::Point(12, 203);
				this->button1->Name = L"button1";
				this->button1->Size = System::Drawing::Size(64, 57);
				this->button1->TabIndex = 0;
				this->button1->Text = L"1";
				this->button1->UseVisualStyleBackColor = true;
				this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
				// 
				// button2
				// 
				this->button2->Location = System::Drawing::Point(82, 203);
				this->button2->Name = L"button2";
				this->button2->Size = System::Drawing::Size(64, 57);
				this->button2->TabIndex = 1;
				this->button2->Text = L"2";
				this->button2->UseVisualStyleBackColor = true;
				this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
				// 
				// button3
				// 
				this->button3->Location = System::Drawing::Point(152, 203);
				this->button3->Name = L"button3";
				this->button3->Size = System::Drawing::Size(64, 57);
				this->button3->TabIndex = 2;
				this->button3->Text = L"3";
				this->button3->UseVisualStyleBackColor = true;
				this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
				// 
				// button4
				// 
				this->button4->Location = System::Drawing::Point(222, 203);
				this->button4->Name = L"button4";
				this->button4->Size = System::Drawing::Size(64, 57);
				this->button4->TabIndex = 3;
				this->button4->Text = L"x";
				this->button4->UseVisualStyleBackColor = true;
				this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
				// 
				// button5
				// 
				this->button5->Location = System::Drawing::Point(12, 266);
				this->button5->Name = L"button5";
				this->button5->Size = System::Drawing::Size(64, 57);
				this->button5->TabIndex = 4;
				this->button5->Text = L"4";
				this->button5->UseVisualStyleBackColor = true;
				this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
				// 
				// button6
				// 
				this->button6->Location = System::Drawing::Point(82, 266);
				this->button6->Name = L"button6";
				this->button6->Size = System::Drawing::Size(64, 57);
				this->button6->TabIndex = 5;
				this->button6->Text = L"5";
				this->button6->UseVisualStyleBackColor = true;
				// 
				// button7
				// 
				this->button7->Location = System::Drawing::Point(152, 266);
				this->button7->Name = L"button7";
				this->button7->Size = System::Drawing::Size(64, 57);
				this->button7->TabIndex = 6;
				this->button7->Text = L"6";
				this->button7->UseVisualStyleBackColor = true;
				this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
				// 
				// button8
				// 
				this->button8->Location = System::Drawing::Point(222, 266);
				this->button8->Name = L"button8";
				this->button8->Size = System::Drawing::Size(64, 57);
				this->button8->TabIndex = 7;
				this->button8->Text = L"-";
				this->button8->UseVisualStyleBackColor = true;
				this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
				// 
				// button9
				// 
				this->button9->Location = System::Drawing::Point(12, 329);
				this->button9->Name = L"button9";
				this->button9->Size = System::Drawing::Size(64, 57);
				this->button9->TabIndex = 8;
				this->button9->Text = L"7";
				this->button9->UseVisualStyleBackColor = true;
				// 
				// button10
				// 
				this->button10->Location = System::Drawing::Point(82, 329);
				this->button10->Name = L"button10";
				this->button10->Size = System::Drawing::Size(64, 57);
				this->button10->TabIndex = 9;
				this->button10->Text = L"8";
				this->button10->UseVisualStyleBackColor = true;
				this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
				// 
				// button11
				// 
				this->button11->Location = System::Drawing::Point(152, 329);
				this->button11->Name = L"button11";
				this->button11->Size = System::Drawing::Size(64, 57);
				this->button11->TabIndex = 10;
				this->button11->Text = L"9";
				this->button11->UseVisualStyleBackColor = true;
				// 
				// button12
				// 
				this->button12->Location = System::Drawing::Point(222, 329);
				this->button12->Name = L"button12";
				this->button12->Size = System::Drawing::Size(64, 57);
				this->button12->TabIndex = 11;
				this->button12->Text = L"+";
				this->button12->UseVisualStyleBackColor = true;
				this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
				// 
				// button13
				// 
				this->button13->Location = System::Drawing::Point(12, 392);
				this->button13->Name = L"button13";
				this->button13->Size = System::Drawing::Size(64, 57);
				this->button13->TabIndex = 12;
				this->button13->Text = L"+/-";
				this->button13->UseVisualStyleBackColor = true;
				// 
				// button14
				// 
				this->button14->Location = System::Drawing::Point(82, 392);
				this->button14->Name = L"button14";
				this->button14->Size = System::Drawing::Size(64, 57);
				this->button14->TabIndex = 13;
				this->button14->Text = L"0";
				this->button14->UseVisualStyleBackColor = true;
				// 
				// button15
				// 
				this->button15->Location = System::Drawing::Point(152, 392);
				this->button15->Name = L"button15";
				this->button15->Size = System::Drawing::Size(64, 57);
				this->button15->TabIndex = 14;
				this->button15->Text = L".";
				this->button15->UseVisualStyleBackColor = true;
				this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
				// 
				// button16
				// 
				this->button16->Location = System::Drawing::Point(222, 392);
				this->button16->Name = L"button16";
				this->button16->Size = System::Drawing::Size(64, 57);
				this->button16->TabIndex = 15;
				this->button16->Text = L"=";
				this->button16->UseVisualStyleBackColor = true;
				this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
				// 
				// button17
				// 
				this->button17->Location = System::Drawing::Point(12, 140);
				this->button17->Name = L"button17";
				this->button17->Size = System::Drawing::Size(64, 57);
				this->button17->TabIndex = 16;
				this->button17->Text = L"1/x";
				this->button17->UseVisualStyleBackColor = true;
				// 
				// button18
				// 
				this->button18->Location = System::Drawing::Point(82, 140);
				this->button18->Name = L"button18";
				this->button18->Size = System::Drawing::Size(64, 57);
				this->button18->TabIndex = 17;
				this->button18->Text = L"x²";
				this->button18->UseVisualStyleBackColor = true;
				this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
				// 
				// button19
				// 
				this->button19->Location = System::Drawing::Point(152, 140);
				this->button19->Name = L"button19";
				this->button19->Size = System::Drawing::Size(64, 57);
				this->button19->TabIndex = 18;
				this->button19->Text = L"2√x";
				this->button19->UseVisualStyleBackColor = true;
				// 
				// button20
				// 
				this->button20->Location = System::Drawing::Point(222, 140);
				this->button20->Name = L"button20";
				this->button20->Size = System::Drawing::Size(64, 57);
				this->button20->TabIndex = 19;
				this->button20->Text = L"/";
				this->button20->UseVisualStyleBackColor = true;
				this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
				// 
				// button21
				// 
				this->button21->Location = System::Drawing::Point(12, 77);
				this->button21->Name = L"button21";
				this->button21->Size = System::Drawing::Size(64, 57);
				this->button21->TabIndex = 20;
				this->button21->Text = L"%";
				this->button21->UseVisualStyleBackColor = true;
				// 
				// button22
				// 
				this->button22->Location = System::Drawing::Point(82, 77);
				this->button22->Name = L"button22";
				this->button22->Size = System::Drawing::Size(64, 57);
				this->button22->TabIndex = 21;
				this->button22->Text = L"CE";
				this->button22->UseVisualStyleBackColor = true;
				// 
				// button23
				// 
				this->button23->Location = System::Drawing::Point(152, 77);
				this->button23->Name = L"button23";
				this->button23->Size = System::Drawing::Size(64, 57);
				this->button23->TabIndex = 22;
				this->button23->Text = L"C";
				this->button23->UseVisualStyleBackColor = true;
				this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
				// 
				// button24
				// 
				this->button24->Location = System::Drawing::Point(222, 77);
				this->button24->Name = L"button24";
				this->button24->Size = System::Drawing::Size(64, 57);
				this->button24->TabIndex = 23;
				this->button24->Text = L"←";
				this->button24->UseVisualStyleBackColor = true;
				// 
				// lblDisplay
				// 
				this->lblDisplay->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				this->lblDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lblDisplay->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
				this->lblDisplay->Location = System::Drawing::Point(13, 22);
				this->lblDisplay->Name = L"lblDisplay";
				this->lblDisplay->Size = System::Drawing::Size(274, 43);
				this->lblDisplay->TabIndex = 24;
				this->lblDisplay->Text = L"0";
				this->lblDisplay->TextAlign = System::Drawing::ContentAlignment::TopRight;
				this->lblDisplay->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
				// 
				// MyForm
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->BackColor = System::Drawing::SystemColors::WindowFrame;
				this->ClientSize = System::Drawing::Size(305, 489);
				this->Controls->Add(this->lblDisplay);
				this->Controls->Add(this->button24);
				this->Controls->Add(this->button23);
				this->Controls->Add(this->button22);
				this->Controls->Add(this->button21);
				this->Controls->Add(this->button20);
				this->Controls->Add(this->button19);
				this->Controls->Add(this->button18);
				this->Controls->Add(this->button17);
				this->Controls->Add(this->button16);
				this->Controls->Add(this->button15);
				this->Controls->Add(this->button14);
				this->Controls->Add(this->button13);
				this->Controls->Add(this->button12);
				this->Controls->Add(this->button11);
				this->Controls->Add(this->button10);
				this->Controls->Add(this->button9);
				this->Controls->Add(this->button8);
				this->Controls->Add(this->button7);
				this->Controls->Add(this->button6);
				this->Controls->Add(this->button5);
				this->Controls->Add(this->button4);
				this->Controls->Add(this->button3);
				this->Controls->Add(this->button2);
				this->Controls->Add(this->button1);
				this->Name = L"MyForm";
				this->Text = L"Calculator";
				this->ResumeLayout(false);

			}
				T firstnum;
				T secondnum;
				T result;
				int es;
				char operation;

	#pragma endregion
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if(lblDisplay->Text == "0")
			{
				lblDisplay->Text = "1";
			}

			else
			{
				lblDisplay->Text = Convert::ToInt64(lblDisplay->Text) + "1";
			}
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
		{

			if (lblDisplay->Text == "0")
			{
				lblDisplay->Text = "2";
			}

			else
			{
				lblDisplay->Text = Convert::ToInt64(lblDisplay->Text) + "2";
			}
		}
		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (lblDisplay->Text == "0")
			{
				lblDisplay->Text = "3";
			}

			else
			{
				lblDisplay->Text = Convert::ToInt64(lblDisplay->Text) + "3";
			}
		}

		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	    {
			firstnum = Convert::ToInt64(lblDisplay->Text);
			lblDisplay->Text = "0";
			operation = '*';
		}

		private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
		{
		}
		private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
		}
		private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e)
		{
		}
		private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e)
		{
		}
		private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e)
		{
		}
		private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) 
		{
		}
	
		private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e)
		{
			lblDisplay->Text = "";
			lblDisplay->Text = "0";
		}

			   //division
		private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e)
		{
			firstnum = Convert::ToInt64(lblDisplay->Text);
			lblDisplay->Text = "0";
			operation = '/';
		}
		private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			firstnum = Convert::ToInt64(lblDisplay->Text);
			lblDisplay->Text = "0";
			operation = '-';
		}
		private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			firstnum = Convert::ToInt64(lblDisplay->Text);
			lblDisplay->Text = "0";
			operation = '+';
		}
		private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) 
		{
		}
		private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			secondnum = Convert::ToInt64(lblDisplay->Text);
			double result = result;
			switch (operation)
			{
			case '+' :
				result = firstnum + secondnum;
				lblDisplay->Text = System::Convert::ToString(result);
			break;

			default:
				lblDisplay->Text = System::Convert::ToString("Syntax error");
			}
		}
};


}
