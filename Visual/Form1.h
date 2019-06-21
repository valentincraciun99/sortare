#pragma once
#include "Vector.h"
#include "EditareFisier.h"
namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

			 Vector *v = new Vector(500001);
			 EditareFisier *editareFisier=new EditareFisier();
	private: System::Windows::Forms::ComboBox^  ComboBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button2;


	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->ComboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ComboBox1
			// 
			this->ComboBox1->FormattingEnabled = true;
			this->ComboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Sortare Prin Inserare", L"Sortare Prin Interschimbare",
					L"Sortare Rapida", L"Sortare STL", L"Gnome Sort"
			});
			this->ComboBox1->Location = System::Drawing::Point(465, 210);
			this->ComboBox1->Name = L"ComboBox1";
			this->ComboBox1->Size = System::Drawing::Size(199, 21);
			this->ComboBox1->TabIndex = 0;
			this->ComboBox1->Text = L"Metode Sortare";
			this->ComboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::Silver;
			this->richTextBox1->Location = System::Drawing::Point(25, 52);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(259, 132);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox1_TextChanged);
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::Color::Silver;
			this->richTextBox2->Location = System::Drawing::Point(388, 52);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(276, 132);
			this->richTextBox2->TabIndex = 3;
			this->richTextBox2->Text = L"";
			this->richTextBox2->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::PaleGreen;
			this->button1->Location = System::Drawing::Point(263, 233);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 45);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Sorteaza";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Location = System::Drawing::Point(25, 249);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Durata Sortare";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label2->Location = System::Drawing::Point(124, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Input";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label3->Location = System::Drawing::Point(503, 21);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Output";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label4->Location = System::Drawing::Point(25, 272);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(10, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"-";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Location = System::Drawing::Point(25, 190);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 31);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Generare Random";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(692, 309);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->ComboBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
	
	
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
	{

	}
	



	private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void richTextBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}

		 private: void ScrieVectorul(int textbox)
		 {
			 String^ output;
			 for (int i = 0; i < v->Dimensiune(); i++)
			 {
				 int a = (*v)[i];
				 output += Convert::ToString(a);
				 if(i<v->Dimensiune()-1) output += " ";

			 }
			 if (textbox == 2)
			 {
				 richTextBox2->Text = output;
				 double qwe = v->DurataUltimaSortare();
				 label4->Text =qwe.ToString();
				 
			 }
			 else
			 {
				 richTextBox1->Text = output;
			 }

			
		 }

	 private:void CitesteVectorul()
	 {
		 auto a = richTextBox1->Text;

		 auto k = a->Split(' ');

		 int q;
		 for (int i = 0; i < k->Length; i++)
		 {
			 try
			 {
				 auto z = k->GetValue(i);

				 q = Convert::ToInt32(z);
				 v->Inserare(q);
			 }
			 catch (Exception())
			 {
				 richTextBox1->Text = "Wrong Input";
			 }
		 }
	 }
	private:void Sorteaza()
	{
		switch (ComboBox1->SelectedIndex)
		{
		case 0:v->SortarePrinInserare();
		case 1:v->SortarePrinInterschimbare();
		case 2:v->SortareRapida();
		case 3:v->StlSort();
		case 4:v->GnomeSort();
		default:
			break;
		}
	}

	private:void Init()
	{
		v->Init();
	}


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	
	Init();

	CitesteVectorul();
	
	Sorteaza();
	
	ScrieVectorul(2);
	
	
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	v->GenerareElementeRandom();
	ScrieVectorul(1);
}
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	
}
};
}
