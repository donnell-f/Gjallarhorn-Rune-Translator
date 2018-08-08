#pragma once
#include <string>
#include <iostream>

namespace RuneTranslator2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace std;

	/// <summary>
	/// Summary for GForm
	/// </summary>
	public ref class GForm : public System::Windows::Forms::Form
	{
	public:
		GForm(void)
		{
			InitializeComponent();

			this->Text = "Gjallarhorn";
			this->Update();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBoxL;
	private: System::Windows::Forms::TextBox^  textBoxR;
	protected:

	protected:

	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(GForm::typeid));
			this->textBoxL = (gcnew System::Windows::Forms::TextBox());
			this->textBoxR = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBoxL
			// 
			this->textBoxL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxL->Location = System::Drawing::Point(12, 194);
			this->textBoxL->Multiline = true;
			this->textBoxL->Name = L"textBoxL";
			this->textBoxL->Size = System::Drawing::Size(265, 221);
			this->textBoxL->TabIndex = 1;
			// 
			// textBoxR
			// 
			this->textBoxR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxR->Location = System::Drawing::Point(604, 194);
			this->textBoxR->Multiline = true;
			this->textBoxR->Name = L"textBoxR";
			this->textBoxR->Size = System::Drawing::Size(265, 221);
			this->textBoxR->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(382, 210);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 49);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Convert!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 174);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Input:";
			this->label1->Click += gcnew System::EventHandler(this, &GForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(601, 174);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Output:";
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Elder Futhark", L"Anglo Saxon", L"Medieval" });
			this->comboBox2->Location = System::Drawing::Point(477, 335);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 5;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Eng to Runes", L"Runes to Eng" });
			this->comboBox1->Location = System::Drawing::Point(283, 335);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(280, 315);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Select Mode";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(474, 315);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(121, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Select Rune Type";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(210, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(464, 141);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// GForm
			// 
			this->AccessibleDescription = L"Translates english characters to runes.";
			this->AccessibleName = L"Gjallarhorn";
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(881, 427);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxR);
			this->Controls->Add(this->textBoxL);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"GForm";
			this->ShowIcon = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->Text = L"Gjallarhorn";
			this->Load += gcnew System::EventHandler(this, &GForm::GForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion;

		//Brackets around a rune means it is an improvised rune (eg. No exact rune was found). 

		//Medieval
		void EngToMed()
		{
			if ((textBoxL->Text)->Length > 0)
			{

				bool skip2 = false;

				for (int i = 0; i < (textBoxL->Text)->Length; i++)
				{
					if (skip2 == true)
					{
						skip2 = false;
						continue;
					}

					//Special
					if ((textBoxL->Text)->Length > (i + 1))
					{
						if (((textBoxL->Text)[i] == 't' || (textBoxL->Text)[i] == 'T') && ((textBoxL->Text)[i + 1] == 'h' || (textBoxL->Text)[i + 1] == 'H'))
						{
							textBoxR->Text += L"ᚦ";
							skip2 = true;
							continue;
						}
					}

					//Symbols
					if ((textBoxL->Text)[i] == ' ')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '.')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == ',')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == ':')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == ';')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '?')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '!')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '\'')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '\"')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '1')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '2')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '3')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '4')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '5')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '6')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '7')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '8')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '9')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '0')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '$')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '(')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == ')')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '+')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '-')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '=')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '*')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '%')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}

					//Letters
					//Conversion key:
					//a=ᛆ b=ᛒ c=ᛍ d=ᛑ e=ᛂ f=ᚠ g=ᚵ h=ᚼ i=ᛁ j=(ᛦ) k=ᚴ l=ᛚ m=ᛘ n=ᚿ o=ᚮ p=ᛔ q=ᛩ r=ᚱ s=ᛋ t=ᛐ u=ᚢ v=ᚡ w=ᚥ x=ᛪ y=ᛦ z=ᛎ th=ᚦ
					{
						if ((textBoxL->Text)[i] == 'a' || (textBoxL->Text)[i] == 'A')
						{
							textBoxR->Text += L"ᛆ";
						}
						if ((textBoxL->Text)[i] == 'b' || (textBoxL->Text)[i] == 'B')
						{
							textBoxR->Text += L"ᛒ";
						}
						if ((textBoxL->Text)[i] == 'c' || (textBoxL->Text)[i] == 'C')
						{
							textBoxR->Text += L"ᛍ";
						}
						if ((textBoxL->Text)[i] == 'd' || (textBoxL->Text)[i] == 'D')
						{
							textBoxR->Text += L"ᛑ";
						}
						if ((textBoxL->Text)[i] == 'e' || (textBoxL->Text)[i] == 'E')
						{
							textBoxR->Text += L"ᛂ";
						}
						if ((textBoxL->Text)[i] == 'f' || (textBoxL->Text)[i] == 'F')
						{
							textBoxR->Text += L"ᚠ";
						}
						if ((textBoxL->Text)[i] == 'g' || (textBoxL->Text)[i] == 'G')
						{
							textBoxR->Text += L"ᚵ";
						}
						if ((textBoxL->Text)[i] == 'h' || (textBoxL->Text)[i] == 'H')
						{
							textBoxR->Text += L"ᚼ";
						}
						if ((textBoxL->Text)[i] == 'i' || (textBoxL->Text)[i] == 'I')
						{
							textBoxR->Text += L"ᛁ";
						}
						if ((textBoxL->Text)[i] == 'j' || (textBoxL->Text)[i] == 'J')
						{
							textBoxR->Text += L"[ᛦ]";
						}
						if ((textBoxL->Text)[i] == 'k' || (textBoxL->Text)[i] == 'K')
						{
							textBoxR->Text += L"ᚴ";
						}
						if ((textBoxL->Text)[i] == 'l' || (textBoxL->Text)[i] == 'L')
						{
							textBoxR->Text += L"ᛚ";
						}
						if ((textBoxL->Text)[i] == 'm' || (textBoxL->Text)[i] == 'M')
						{
							textBoxR->Text += L"ᛘ";
						}
						if ((textBoxL->Text)[i] == 'n' || (textBoxL->Text)[i] == 'N')
						{
							textBoxR->Text += L"ᚿ";
						}
						if ((textBoxL->Text)[i] == 'o' || (textBoxL->Text)[i] == 'O')
						{
							textBoxR->Text += L"ᚮ";
						}
						if ((textBoxL->Text)[i] == 'p' || (textBoxL->Text)[i] == 'P')
						{
							textBoxR->Text += L"ᛔ";
						}
						if ((textBoxL->Text)[i] == 'q' || (textBoxL->Text)[i] == 'Q')
						{
							textBoxR->Text += L"ᛩ";
						}
						if ((textBoxL->Text)[i] == 'r' || (textBoxL->Text)[i] == 'R')
						{
							textBoxR->Text += L"ᚱ";
						}
						if ((textBoxL->Text)[i] == 's' || (textBoxL->Text)[i] == 'S')
						{
							textBoxR->Text += L"ᛋ";
						}
						if ((textBoxL->Text)[i] == 't' || (textBoxL->Text)[i] == 'T')
						{
							textBoxR->Text += L"ᛐ";
						}
						if ((textBoxL->Text)[i] == 'u' || (textBoxL->Text)[i] == 'U')
						{
							textBoxR->Text += L"ᚢ";
						}
						if ((textBoxL->Text)[i] == 'v' || (textBoxL->Text)[i] == 'V')
						{
							textBoxR->Text += L"ᚡ";
						}
						if ((textBoxL->Text)[i] == 'w' || (textBoxL->Text)[i] == 'W')
						{
							textBoxR->Text += L"ᚥ";
						}
						if ((textBoxL->Text)[i] == 'x' || (textBoxL->Text)[i] == 'X')
						{
							textBoxR->Text += L"ᛪ";
						}
						if ((textBoxL->Text)[i] == 'y' || (textBoxL->Text)[i] == 'Y')
						{
							textBoxR->Text += L"ᛦ";
						}
						if ((textBoxL->Text)[i] == 'z' || (textBoxL->Text)[i] == 'Z')
						{
							textBoxR->Text += L"ᛎ";
						}
						if ((textBoxL->Text)[i] == 'ð' || (textBoxL->Text)[i] == 'Ð')
						{
							textBoxR->Text += L"ᚧ";
						}
						if ((textBoxL->Text)[i] == 'Æ' || (textBoxL->Text)[i] == 'æ' || (textBoxL->Text)[i] == 'Ä' || (textBoxL->Text)[i] == 'ä')
						{
							textBoxR->Text += L"[ᛅ/ᛆ]";
						}
						if ((textBoxL->Text)[i] == 'Ø' || (textBoxL->Text)[i] == 'ø' || (textBoxL->Text)[i] == 'Ö' || (textBoxL->Text)[i] == 'ö')
						{
							textBoxR->Text += L"ᚯ";
						}
					}
				}
			}
		}

		void MedToEng()
		{
			if ((textBoxL->Text)->Length > 0)
			{

				bool skip2 = false;
				bool skip3 = false;
				bool skip4 = false;

				for (int i = 0; i < (textBoxL->Text)->Length; i++)
				{
					if (skip2 == true)
					{
						skip2 = false;
						continue;
					}
					if (skip3 == true)
					{
						skip3 = false;
						skip2 = true;
						continue;
					}

					//Special
					if (((textBoxL->Text)[i] == L'[') && ((textBoxL->Text)[i + 1] == L'ᛦ') && ((textBoxL->Text)[i + 2] == L']'))
					{
						textBoxR->Text += "j";
						skip3 = true;
						continue;
					}

					//Symbols
					if ((textBoxL->Text)[i] == ' ')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '.')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == ',')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == ':')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == ';')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '?')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '!')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '\'')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '\"')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '1')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '2')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '3')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '4')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '5')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '6')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '7')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '8')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '9')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '0')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '$')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '(')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == ')')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '+')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '-')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '=')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '*')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '%')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}

					//Letters
					//Conversion key:
					//a=ᛆ b=ᛒ c=ᛍ d=ᛑ e=ᛂ f=ᚠ g=ᚵ h=ᚼ i=ᛁ j=(ᛦ) k=ᚴ l=ᛚ m=ᛘ n=ᚿ o=ᚮ p=ᛔ q=ᛩ r=ᚱ s=ᛋ t=ᛐ u=ᚢ v=ᚡ w=ᚥ x=ᛪ y=ᛦ z=ᛎ th=ᚦ
					{
						if ((textBoxL->Text)[i] == L'ᛆ')
						{
							textBoxR->Text += "a";
						}
						if ((textBoxL->Text)[i] == L'ᛒ')
						{
							textBoxR->Text += "b";
						}
						if ((textBoxL->Text)[i] == L'ᛍ')
						{
							textBoxR->Text += "c";
						}
						if ((textBoxL->Text)[i] == L'ᛑ')
						{
							textBoxR->Text += "d";
						}
						if ((textBoxL->Text)[i] == L'ᛂ')
						{
							textBoxR->Text += "e";
						}
						if ((textBoxL->Text)[i] == L'ᚠ')
						{
							textBoxR->Text += "f";
						}
						if ((textBoxL->Text)[i] == L'ᚵ')
						{
							textBoxR->Text += "g";
						}
						if ((textBoxL->Text)[i] == L'ᚼ')
						{
							textBoxR->Text += "h";
						}
						if ((textBoxL->Text)[i] == L'ᛁ')
						{
							textBoxR->Text += "i";
						}
						if ((textBoxL->Text)[i] == L'ᚦ')
						{
							textBoxR->Text += "th";
						}
						if ((textBoxL->Text)[i] == L'ᚴ')
						{
							textBoxR->Text += "k";
						}
						if ((textBoxL->Text)[i] == L'ᛚ')
						{
							textBoxR->Text += "l";
						}
						if ((textBoxL->Text)[i] == L'ᛘ')
						{
							textBoxR->Text += "m";
						}
						if ((textBoxL->Text)[i] == L'ᚿ')
						{
							textBoxR->Text += "n";
						}
						if ((textBoxL->Text)[i] == L'ᚮ')
						{
							textBoxR->Text += "o";
						}
						if ((textBoxL->Text)[i] == L'ᛔ')
						{
							textBoxR->Text += "p";
						}
						if ((textBoxL->Text)[i] == L'ᛩ')
						{
							textBoxR->Text += "q";
						}
						if ((textBoxL->Text)[i] == L'ᚱ')
						{
							textBoxR->Text += "r";
						}
						if ((textBoxL->Text)[i] == L'ᛋ')
						{
							textBoxR->Text += "s";
						}
						if ((textBoxL->Text)[i] == L'ᛐ')
						{
							textBoxR->Text += "t";
						}
						if ((textBoxL->Text)[i] == L'ᚢ')
						{
							textBoxR->Text += "u";
						}
						if ((textBoxL->Text)[i] == L'ᚡ')
						{
							textBoxR->Text += "v";
						}
						if ((textBoxL->Text)[i] == L'ᚥ')
						{
							textBoxR->Text += "w";
						}
						if ((textBoxL->Text)[i] == L'ᛪ')
						{
							textBoxR->Text += "x";
						}
						if ((textBoxL->Text)[i] == L'ᛦ')
						{
							textBoxR->Text += "y";
						}
						if ((textBoxL->Text)[i] == L'ᛎ')
						{
							textBoxR->Text += "z";
						}
						if ((textBoxL->Text)[i] == L'ᚧ')
						{
							textBoxR->Text += "ð";
						}
						if ((textBoxL->Text)[i] == L'ᚯ')
						{
							textBoxR->Text += "ø";
						}
						if ((textBoxL->Text)[i] == L'ᛅ' || (textBoxL->Text)[i] == L'ᛆ')
						{
							textBoxR->Text += "[æ/ä]";
						}
					}
				}
			}
		}

		//Anglo Saxon
		void EngToAS()
		{
			//English to Anglo Saxon key
			//ᚠ = f, ᚢ = u, ᚦ = th, ᚩ = o, ᚱ = r, ᚳ = c, ᚷ = g, ᚹ = w, ᚻ = h, ᚾ = n, ᛁ = i, ᛄ = j, ᛇ = eo, ᛈ = p, ᛉ = x, ᛋ = s, ᛏ = t, ᛒ = b, ᛖ = e, ᛗ = m, ᛚ = l, ᛝ = ng, ᛟ = oe, ᛞ = d, ᚪ = a, ᚣ = y, ᛡ = (ia), ᛠ = ea
			
			if ((textBoxL->Text)->Length > 0)
			{

				bool skip2 = false;

				for (int i = 0; i < (textBoxL->Text)->Length; i++)
				{
					if (skip2 == true)
					{
						skip2 = false;
						continue;
					}

					//Special th, eo, ng, oe (ia/io), ea
					if ((textBoxL->Text)->Length > (i + 1))
					{
						if (((textBoxL->Text)[i] == 't' || (textBoxL->Text)[i] == 'T') && ((textBoxL->Text)[i + 1] == 'h' || (textBoxL->Text)[i + 1] == 'H'))
						{
							textBoxR->Text += L"ᚦ";
							skip2 = true;
							continue;
						}
						if (((textBoxL->Text)[i] == 'n' || (textBoxL->Text)[i] == 'N') && ((textBoxL->Text)[i + 1] == 'g' || (textBoxL->Text)[i + 1] == 'G'))
						{
							textBoxR->Text += L"ᛝ";
							skip2 = true;
							continue;
						}
						if (((textBoxL->Text)[i] == 'e' || (textBoxL->Text)[i] == 'E') && ((textBoxL->Text)[i + 1] == 'o' || (textBoxL->Text)[i + 1] == 'O'))
						{
							textBoxR->Text += L"ᛇ";
							skip2 = true;
							continue;
						}
						if (((textBoxL->Text)[i] == 'o' || (textBoxL->Text)[i] == 'O') && ((textBoxL->Text)[i + 1] == 'e' || (textBoxL->Text)[i + 1] == 'E'))
						{
							textBoxR->Text += L"ᛟ";
							skip2 = true;
							continue;
						}
						if (((textBoxL->Text)[i] == 'i' || (textBoxL->Text)[i] == 'I') && ((textBoxL->Text)[i + 1] == 'a' || (textBoxL->Text)[i + 1] == 'A'))
						{
							textBoxR->Text += L"ᛡ";
							skip2 = true;
							continue;
						}
						if (((textBoxL->Text)[i] == 'e' || (textBoxL->Text)[i] == 'E') && ((textBoxL->Text)[i + 1] == 'a' || (textBoxL->Text)[i + 1] == 'A'))
						{
							textBoxR->Text += L"ᛠ";
							skip2 = true;
							continue;
						}
					}

					//Symbols
					if ((textBoxL->Text)[i] == ' ')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '.')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == ',')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == ':')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == ';')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '?')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '!')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '\'')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '\"')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '1')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '2')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '3')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '4')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '5')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '6')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '7')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '8')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '9')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '0')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '$')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '(')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == ')')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '+')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '-')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '=')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '*')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '%')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}

					//Letters
					if ((textBoxL->Text)[i] == 'f' || (textBoxL->Text)[i] == 'F')
					{
						textBoxR->Text += L"ᚠ";
					}
					if ((textBoxL->Text)[i] == 'u' || (textBoxL->Text)[i] == 'U')
					{
						textBoxR->Text += L"ᚢ";
					}
					if ((textBoxL->Text)[i] == 'o' || (textBoxL->Text)[i] == 'O')
					{
						textBoxR->Text += L"ᚩ";
					}
					if ((textBoxL->Text)[i] == 'r' || (textBoxL->Text)[i] == 'R')
					{
						textBoxR->Text += L"ᚱ";
					}
					if ((textBoxL->Text)[i] == 'c' || (textBoxL->Text)[i] == 'C')
					{
						textBoxR->Text += L"ᚳ";
					}
					if ((textBoxL->Text)[i] == 'g' || (textBoxL->Text)[i] == 'G')
					{
						textBoxR->Text += L"ᚷ";
					}
					if ((textBoxL->Text)[i] == 'w' || (textBoxL->Text)[i] == 'W')
					{
						textBoxR->Text += L"ᚹ";
					}
					if ((textBoxL->Text)[i] == 'h' || (textBoxL->Text)[i] == 'H')
					{
						textBoxR->Text += L"ᚻ";
					}
					if ((textBoxL->Text)[i] == 'n' || (textBoxL->Text)[i] == 'N')
					{
						textBoxR->Text += L"ᚾ";
					}
					if ((textBoxL->Text)[i] == 'i' || (textBoxL->Text)[i] == 'I')
					{
						textBoxR->Text += L"ᛁ";
					}
					if ((textBoxL->Text)[i] == 'j' || (textBoxL->Text)[i] == 'J')
					{
						textBoxR->Text += L"ᛄ";
					}
					if ((textBoxL->Text)[i] == 'p' || (textBoxL->Text)[i] == 'P')
					{
						textBoxR->Text += L"ᛈ";
					}
					if ((textBoxL->Text)[i] == 'x' || (textBoxL->Text)[i] == 'X')
					{
						textBoxR->Text += L"ᛉ";
					}
					if ((textBoxL->Text)[i] == 's' || (textBoxL->Text)[i] == 'S')
					{
						textBoxR->Text += L"ᛋ";
					}
					if ((textBoxL->Text)[i] == 't' || (textBoxL->Text)[i] == 'T')
					{
						textBoxR->Text += L"ᛏ";
					}
					if ((textBoxL->Text)[i] == 'b' || (textBoxL->Text)[i] == 'B')
					{
						textBoxR->Text += L"ᛒ";
					}
					if ((textBoxL->Text)[i] == 'e' || (textBoxL->Text)[i] == 'E')
					{
						textBoxR->Text += L"ᛖ";
					}
					if ((textBoxL->Text)[i] == 'm' || (textBoxL->Text)[i] == 'M')
					{
						textBoxR->Text += L"ᛗ";
					}
					if ((textBoxL->Text)[i] == 'l' || (textBoxL->Text)[i] == 'L')
					{
						textBoxR->Text += L"ᛚ";
					}
					if ((textBoxL->Text)[i] == 'd' || (textBoxL->Text)[i] == 'D')
					{
						textBoxR->Text += L"ᛞ";
					}
					if ((textBoxL->Text)[i] == 'a' || (textBoxL->Text)[i] == 'A')
					{
						textBoxR->Text += L"ᚪ";
					}
					if ((textBoxL->Text)[i] == 'y' || (textBoxL->Text)[i] == 'Y')
					{
						textBoxR->Text += L"ᚣ";
					}
					if ((textBoxL->Text)[i] == 'k' || (textBoxL->Text)[i] == 'K')
					{
						textBoxR->Text += L"[ᚳ]";
					}
					if ((textBoxL->Text)[i] == 'q' || (textBoxL->Text)[i] == 'Q')
					{
						textBoxR->Text += L"[ᚳᚢ]";
					}
					if ((textBoxL->Text)[i] == 'z' || (textBoxL->Text)[i] == 'Z')
					{
						textBoxR->Text += L"[ᛋᛖ]";
					}
					if ((textBoxL->Text)[i] == 'v' || (textBoxL->Text)[i] == 'V')
					{
						textBoxR->Text += L"[ᚹ]";
					}
				}
			}
		}

		void AStoEng()
		{
			//English to Anglo Saxon key
			//ᚠ = f, ᚢ = u, ᚦ = th, ᚩ = o, ᚱ = r, ᚳ = c, ᚷ = g, ᚹ = w, ᚻ = h, ᚾ = n, ᛁ = i, ᛄ = j, ᛇ = eo, ᛈ = p, ᛉ = x, ᛋ = s, ᛏ = t, ᛒ = b, ᛖ = e, ᛗ = m, ᛚ = l, ᛝ = ng, ᛟ = oe, ᛞ = d, ᚪ = a, ᚣ = y, ᛡ = (ia / io), ᛠ = ea
			if ((textBoxL->Text)->Length > 0)
			{

				bool skip2 = false;
				bool skip3 = false;
				bool skip4 = false;

				for (int i = 0; i < (textBoxL->Text)->Length; i++)
				{
					if (skip2 == true)
					{
						skip2 = false;
						continue;
					}
					if (skip3 == true)
					{
						skip3 = false;
						skip2 = true;
						continue;
					}
					if (skip4 == true)
					{
						skip4 = false;
						skip3 = true;
						continue;
					}

					//Special
					if((textBoxL->Text)->Length > (i + 2))
					{
						if (((textBoxL->Text)[i] == L'[') && ((textBoxL->Text)[i + 1] == L'ᚳ') && ((textBoxL->Text)[i + 2] == L']'))
						{
							textBoxR->Text += "k";
							skip3 = true;
							continue;
						}

						if (((textBoxL->Text)[i] == L'[') && ((textBoxL->Text)[i + 1] == L'ᚹ') && ((textBoxL->Text)[i + 2] == L']'))
						{
							textBoxR->Text += "v";
							skip3 = true;
							continue;
						}
					}
					if ((textBoxL->Text)->Length > (i + 3))
					{
						if (((textBoxL->Text)[i] == L'[') && ((textBoxL->Text)[i + 1] == L'ᛋ') && ((textBoxL->Text)[i + 2] == L'ᛖ') && ((textBoxL->Text)[i + 3] == L']'))
						{
							textBoxR->Text += "z";
							skip4 = true;
							continue;
						}
						if (((textBoxL->Text)[i] == L'[') && ((textBoxL->Text)[i + 1] == L'ᚳ') && ((textBoxL->Text)[i + 2] == L'ᚢ') && ((textBoxL->Text)[i + 3] == L']'))
						{
							textBoxR->Text += "q";
							skip4 = true;
							continue;
						}
					}

					//Symbols
					if ((textBoxL->Text)[i] == ' ')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '.')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == ',')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == ':')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == ';')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '?')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '!')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '\'')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '\"')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '1')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '2')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '3')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '4')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '5')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '6')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '7')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '8')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '9')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '0')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '$')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '(')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == ')')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '+')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '-')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '=')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '*')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '%')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}

					//Letters
					//English to Anglo Saxon key
					//ᚠ = f, ᚢ = u, ᚦ = th, ᚩ = o, ᚱ = r, ᚳ = c, ᚷ = g, ᚹ = w, ᚻ = h, ᚾ = n, ᛁ = i, ᛄ = j, ᛇ = eo, ᛈ = p, ᛉ = x, ᛋ = s, ᛏ = t, ᛒ = b, ᛖ = e, ᛗ = m, ᛚ = l, ᛝ = ng, ᛟ = oe, ᛞ = d, ᚪ = a, ᚣ = y, ᛡ = (ia), ᛠ = ea
					if ((textBoxL->Text)[i] == L'ᚠ')
					{
						textBoxR->Text += "f";
					}
					if ((textBoxL->Text)[i] == L'ᚢ')
					{
						textBoxR->Text += "u";
					}
					if ((textBoxL->Text)[i] == L'ᚦ')
					{
						textBoxR->Text += "th";
					}
					if ((textBoxL->Text)[i] == L'ᚩ')
					{
						textBoxR->Text += "o";
					}
					if ((textBoxL->Text)[i] == L'ᚱ')
					{
						textBoxR->Text += "r";
					}
					if ((textBoxL->Text)[i] == L'ᚳ')
					{
						textBoxR->Text += "c";
					}
					if ((textBoxL->Text)[i] == L'ᚷ')
					{
						textBoxR->Text += "g";
					}
					if ((textBoxL->Text)[i] == L'ᚹ')
					{
						textBoxR->Text += "w";
					}
					if ((textBoxL->Text)[i] == L'ᚻ')
					{
						textBoxR->Text += "h";
					}
					if ((textBoxL->Text)[i] == L'ᚾ')
					{
						textBoxR->Text += "n";
					}
					if ((textBoxL->Text)[i] == L'ᛁ')
					{
						textBoxR->Text += "i";
					}
					if ((textBoxL->Text)[i] == L'ᛄ')
					{
						textBoxR->Text += "j";
					}
					if ((textBoxL->Text)[i] == L'ᛇ')
					{
						textBoxR->Text += "eo";
					}
					if ((textBoxL->Text)[i] == L'ᛈ')
					{
						textBoxR->Text += "p";
					}
					if ((textBoxL->Text)[i] == L'ᛉ')
					{
						textBoxR->Text += "x";
					}
					if ((textBoxL->Text)[i] == L'ᛋ')
					{
						textBoxR->Text += "s";
					}
					if ((textBoxL->Text)[i] == L'ᛏ')
					{
						textBoxR->Text += "t";
					}
					if ((textBoxL->Text)[i] == L'ᛒ')
					{
						textBoxR->Text += "b";
					}
					if ((textBoxL->Text)[i] == L'ᛖ')
					{
						textBoxR->Text += "e";
					}
					if ((textBoxL->Text)[i] == L'ᛗ')
					{
						textBoxR->Text += "m";
					}
					if ((textBoxL->Text)[i] == L'ᛚ')
					{
						textBoxR->Text += "l";
					}
					if ((textBoxL->Text)[i] == L'ᛝ')
					{
						textBoxR->Text += "ng";
					}
					if ((textBoxL->Text)[i] == L'ᛟ')
					{
						textBoxR->Text += "oe";
					}
					if ((textBoxL->Text)[i] == L'ᛞ')
					{
						textBoxR->Text += "d";
					}
					if ((textBoxL->Text)[i] == L'ᚪ')
					{
						textBoxR->Text += "a";
					}
					if ((textBoxL->Text)[i] == L'ᚣ')
					{
						textBoxR->Text += "y";
					}
					if ((textBoxL->Text)[i] == L'ᛡ')
					{
						textBoxR->Text += "ia";
					}
					if ((textBoxL->Text)[i] == L'ᛠ')
					{
						textBoxR->Text += "ea";
					}
				}
			}
		}

		//Elder Futhark
		void EngToEF()
		{
			if (((textBoxL->Text)->Length) > 0)
			{
				//Elder futhark conversion key:
				//ᚠ=f ᚢ=u ᚦ=th ᚨ=a ᚱ=r ᚲ=k ᚷ=g ᚹ=(w/v) ᚺ=h ᚾ=n ᛁ=i ᛃ=(j/y) ᛈ=p ᛇ=e ᛉ=z ᛊ=s ᛏ=t ᛒ=b ᛖ=e ᛗ=m ᛚ=l ᛜ=ng ᛞ=d ᛟ=o

				bool skip2 = false;

				for (int i = 0; i < ((textBoxL->Text)->Length); i++)
				{
					if (skip2 == true)
					{
						skip2 = false;
						continue;
					}

					//Special

					if ((textBoxL->Text)->Length > (i + 1))
					{

						if (((textBoxL->Text)[i] == 't' || (textBoxL->Text)[i] == 'T') && ((textBoxL->Text)[i + 1] == 'h' || (textBoxL->Text)[i + 1] == 'H'))
						{
							textBoxR->Text += L"ᚦ";
							skip2 = true;
							continue;
						}

						if (((textBoxL->Text)[i] == 'n' || (textBoxL->Text)[i] == 'N') && ((textBoxL->Text)[i + 1] == 'g' || (textBoxL->Text)[i + 1] == 'G'))
						{
							textBoxR->Text += L"ᛜ";
							skip2 = true;
							continue;
						}
					}

					//Symbols
					if ((textBoxL->Text)[i] == ' ')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '.')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == ',')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == ':')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == ';')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '?')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '!')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '\'')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '\"')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '1')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '2')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '3')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '4')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '5')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '6')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '7')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '8')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '9')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '0')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '$')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '(')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == ')')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '+')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '-')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '=')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '*')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '%')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}

					//Letters
					if ((textBoxL->Text)[i] == 'n' || (textBoxL->Text)[i] == 'N')
					{
						textBoxR->Text += L"ᚾ";
					}

					if ((textBoxL->Text)[i] == 'g' || (textBoxL->Text)[i] == 'G')
					{
						textBoxR->Text += L"ᚷ";
					}

					if ((textBoxL->Text)[i] == 't' || (textBoxL->Text)[i] == 'T')
					{
						textBoxR->Text += L"ᛏ";
					}

					if ((textBoxL->Text)[i] == 'h' || (textBoxL->Text)[i] == 'H')
					{
						textBoxR->Text += L"ᚺ";
					}

					if ((textBoxL->Text)[i] == 'a' || (textBoxL->Text)[i] == 'A')
					{
						textBoxR->Text += L"ᚨ";
					}

					if ((textBoxL->Text)[i] == 'b' || (textBoxL->Text)[i] == 'B')
					{
						textBoxR->Text += L"ᛒ";
					}

					if ((textBoxL->Text)[i] == 'c' || (textBoxL->Text)[i] == 'C')
					{
						textBoxR->Text += L"[ᚲ]"; //Might change it later
					}

					if ((textBoxL->Text)[i] == 'd' || (textBoxL->Text)[i] == 'D')
					{
						textBoxR->Text += L"ᛞ";
					}

					if ((textBoxL->Text)[i] == 'f' || (textBoxL->Text)[i] == 'F')
					{
						textBoxR->Text += L"ᚠ";
					}

					if ((textBoxL->Text)[i] == 'i' || (textBoxL->Text)[i] == 'I')
					{
						textBoxR->Text += L"ᛁ";
					}

					if ((textBoxL->Text)[i] == 'j' || (textBoxL->Text)[i] == 'J')
					{
						textBoxR->Text += L"ᛃ";
					}

					if ((textBoxL->Text)[i] == 'k' || (textBoxL->Text)[i] == 'K')
					{
						textBoxR->Text += L"ᚲ";
					}

					if ((textBoxL->Text)[i] == 'l' || (textBoxL->Text)[i] == 'L')
					{
						textBoxR->Text += L"ᛚ";
					}

					if ((textBoxL->Text)[i] == 'm' || (textBoxL->Text)[i] == 'M')
					{
						textBoxR->Text += L"ᛗ";
					}

					if ((textBoxL->Text)[i] == 'o' || (textBoxL->Text)[i] == 'O')
					{
						textBoxR->Text += L"ᛟ";
					}

					if ((textBoxL->Text)[i] == 'p' || (textBoxL->Text)[i] == 'P')
					{
						textBoxR->Text += L"ᛈ";
					}

					if ((textBoxL->Text)[i] == 'q' || (textBoxL->Text)[i] == 'Q')
					{
						textBoxR->Text += L"[ᚲᚢ]";
					}

					if ((textBoxL->Text)[i] == 'r' || (textBoxL->Text)[i] == 'R')
					{
						textBoxR->Text += L"ᚱ";
					}

					if ((textBoxL->Text)[i] == 's' || (textBoxL->Text)[i] == 'S')
					{
						textBoxR->Text += L"ᛊ";
					}

					if ((textBoxL->Text)[i] == 'u' || (textBoxL->Text)[i] == 'U')
					{
						textBoxR->Text += L"ᚢ";
					}

					if ((textBoxL->Text)[i] == 'v' || (textBoxL->Text)[i] == 'V')
					{
						textBoxR->Text += L"ᚹ";
					}

					if ((textBoxL->Text)[i] == 'w' || (textBoxL->Text)[i] == 'W')
					{
						textBoxR->Text += L"ᚹ";
					}

					if ((textBoxL->Text)[i] == 'x' || (textBoxL->Text)[i] == 'X')
					{
						textBoxR->Text += L"[ᚲᛊ]";
					}

					if ((textBoxL->Text)[i] == 'y' || (textBoxL->Text)[i] == 'Y')
					{
						textBoxR->Text += L"ᛃ";
					}

					if ((textBoxL->Text)[i] == 'z' || (textBoxL->Text)[i] == 'Z')
					{
						textBoxR->Text += L"ᛉ";
					}

					if ((textBoxL->Text)[i] == 'Ï' || (textBoxL->Text)[i] == 'ï')
					{
						textBoxR->Text += L"ᛇ";
					}
				}
			}
			else
			{
				textBoxR->Text = "ERROR: No symbols to convert.";
			}
		}

		void EFtoEng()
		{
			//Elder futhark conversion key:
			//ᚠ=f ᚢ=u ᚦ=th ᚨ=a ᚱ=r ᚲ=k ᚷ=g ᚹ=(w/v) ᚺ=h ᚾ=n ᛁ=i ᛃ=(j/y) ᛈ=p ᛇ=e ᛉ=z ᛊ=s ᛏ=t ᛒ=b ᛖ=e ᛗ=m ᛚ=l ᛜ=ng ᛞ=d ᛟ=o
			if ((textBoxL->Text)->Length > 0)
			{
				bool skip2 = false;
				bool skip3 = false;
				bool skip4 = false;

				for (int i = 0; i < (textBoxL->Text)->Length; i++)
				{
					if (skip2 == true)
					{
						skip2 = false;
						continue;
					}
					if (skip3 == true)
					{
						skip2 = true;
						skip3 = false;
						continue;
					}
					if (skip4 == true)
					{
						skip3 = true;
						skip4 = false;
						continue;
					}

					//Special
					if ((textBoxL->Text)->Length > i + 2)
					{
						if ((textBoxL->Text)[i] == L'[' && (textBoxL->Text)[i + 1] == L'ᚲ' && (textBoxL->Text)[i + 2] == L']')
						{
							textBoxR->Text += "c";
							skip3 = true;
							continue;
						}
					}

					if ((textBoxL->Text)->Length > i + 3)
					{
						if ((textBoxL->Text)[i] == L'[' && (textBoxL->Text)[i + 1] == L'ᚲ' && (textBoxL->Text)[i + 2] == L'ᛊ' && (textBoxL->Text)[i + 3] == L']')
						{
							textBoxR->Text += "x";
							skip4 = true;
							continue;
						}
						if ((textBoxL->Text)[i] == L'[' && (textBoxL->Text)[i + 1] == L'ᚲ' && (textBoxL->Text)[i + 2] == L'ᚢ' && (textBoxL->Text)[i + 3] == L']')
						{
							textBoxR->Text += "q";
							skip4 = true;
							continue;
						}
					}

					//Symbols
					if ((textBoxL->Text)[i] == ' ')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '.')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == ',')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == ':')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == ';')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '?')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '!')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '\'')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '\"')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '1')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '2')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '3')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '4')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '5')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '6')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '7')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '8')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '9')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '0')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '$')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '(')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == ')')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '+')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '-')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '=')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '*')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}
					if ((textBoxL->Text)[i] == '%')
					{
						textBoxR->Text += (textBoxL->Text)[i];
					}

					//Letters
					//ᚠ=f ᚢ=u ᚦ=th ᚨ=a ᚱ=r ᚲ=k ᚷ=g ᚹ=(w/v) ᚺ=h ᚾ=n ᛁ=i ᛃ=(j/y) ᛈ=p ᛇ=e ᛉ=z ᛊ=s ᛏ=t ᛒ=b ᛖ=e ᛗ=m ᛚ=l ᛜ=ng ᛞ=d ᛟ=o
					if ((textBoxL->Text)[i] == L'ᚠ')
					{
						textBoxR->Text += "f";
					}
					if ((textBoxL->Text)[i] == L'ᚢ')
					{
						textBoxR->Text += "u";
					}
					if ((textBoxL->Text)[i] == L'ᚦ')
					{
						textBoxR->Text += "th";
					}
					if ((textBoxL->Text)[i] == L'ᚨ')
					{
						textBoxR->Text += "a";
					}
					if ((textBoxL->Text)[i] == L'ᚱ')
					{
						textBoxR->Text += "r";
					}
					if ((textBoxL->Text)[i] == L'ᚲ')
					{
						textBoxR->Text += "k";
					}
					if ((textBoxL->Text)[i] == L'ᚷ')
					{
						textBoxR->Text += "g";
					}
					if ((textBoxL->Text)[i] == L'ᚹ')
					{
						textBoxR->Text += "[w/v]";
					}
					if ((textBoxL->Text)[i] == L'ᚺ')
					{
						textBoxR->Text += "h";
					}
					if ((textBoxL->Text)[i] == L'ᚾ')
					{
						textBoxR->Text += "n";
					}
					if ((textBoxL->Text)[i] == L'ᛁ')
					{
						textBoxR->Text += "i";
					}
					if ((textBoxL->Text)[i] == L'ᛃ')
					{
						textBoxR->Text += "[j/y]";
					}
					if ((textBoxL->Text)[i] == L'ᛈ')
					{
						textBoxR->Text += "p";
					}
					if ((textBoxL->Text)[i] == L'ᛉ')
					{
						textBoxR->Text += "z";
					}
					if ((textBoxL->Text)[i] == L'ᛊ')
					{
						textBoxR->Text += "s";
					}
					if ((textBoxL->Text)[i] == L'ᛏ')
					{
						textBoxR->Text += "t";
					}
					if ((textBoxL->Text)[i] == L'ᛒ')
					{
						textBoxR->Text += "b";
					}
					if ((textBoxL->Text)[i] == L'ᛖ')
					{
						textBoxR->Text += "e";
					}
					if ((textBoxL->Text)[i] == L'ᛗ')
					{
						textBoxR->Text += "m";
					}
					if ((textBoxL->Text)[i] == L'ᛚ')
					{
						textBoxR->Text += "l";
					}
					if ((textBoxL->Text)[i] == L'ᛜ')
					{
						textBoxR->Text += "ng";
					}
					if ((textBoxL->Text)[i] == L'ᛞ')
					{
						textBoxR->Text += "d";
					}
					if ((textBoxL->Text)[i] == L'ᛟ')
					{
						textBoxR->Text += "o";
					}
					if ((textBoxL->Text)[i] == L'ᛇ')
					{
						textBoxR->Text += "ï";
					}
				}
			}
		}
	 
//--------------------------------//

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	if (comboBox1->Text == "Eng to Runes")
	{
		if (comboBox2->Text == "Anglo Saxon")
		{
			EngToAS();
		}
		if (comboBox2->Text == "Elder Futhark")
		{
			EngToEF();
		}
		if (comboBox2->Text == "Medieval")
		{
			EngToMed();
		}
	}

	if (comboBox1->Text == "Runes to Eng")
	{
		if (comboBox2->Text == "Elder Futhark")
		{
			EFtoEng();
		}
		if (comboBox2->Text == "Anglo Saxon")
		{
			AStoEng();
		}
		if (comboBox2->Text == "Medieval")
		{
			MedToEng();
		}
	}
}
private: System::Void GForm_Load(System::Object^  sender, System::EventArgs^  e)
{
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e)
{
}
};
}
