#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Button^ button3;
	private: System::String^ failo_vardas = "";
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(801, 67);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(159, 39);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Open";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(801, 214);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 39);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(24, 67);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(722, 622);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::saveFileDialog1_FileOk);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(801, 142);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(159, 39);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Save as..";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialog1_FileOk);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(801, 650);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(159, 39);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Close";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1015, 33);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->openToolStripMenuItem,
					this->saveAsToolStripMenuItem, this->saveToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(73, 29);
			this->menuToolStripMenuItem->Text = L"Menu";
			this->menuToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::menuToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->saveAsToolStripMenuItem->Text = L"Save as..";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveAsToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1015, 760);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void saveFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog1->InitialDirectory = "..\\";															// parenkome darbinę direktoriją
		openFileDialog1->Filter = "txt files (*.txt)|*.txt";												// naudojamas filtras "Text files (*.txt)|*.txt";
		openFileDialog1->InitialDirectory = "..\\";															// parenkome darbinę direktoriją
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)						// atidarom bilu pasirinkimo atverimui langa, 
		{
			System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(openFileDialog1->FileName);		// susiejame skaitymo srautą su atvertu failu kurio kelias
			// paimtas iš openFileDialog1->FileName
			textBox1->Text = (sr->ReadToEnd());																// nuskaitome į textBox1->Text tekstą iš atverto failo
			failo_vardas = openFileDialog1->FileName;														// išsaugome failo vardą jei noresime perrašyti jo turinį po pataisymų 
			sr->Close();																					// uždarome srautą ir failą
		}
	}
private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();											// įgaliname įkeltą SaveFileDialog objektą
	saveFileDialog1->InitialDirectory = "..\\";															// parenkome darbinę direktoriją
	saveFileDialog1->Filter = "txt files (*.txt)|*.txt";												// parinkome galimus failų pletinius
	String^ z = textBox1->Text;																			// užpildome objektą System::String tekstu paimtu iš textBox1 objekto
rep:
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)						// atidarom saugojimo vietos pasirinkimo langa, 
		// naudojamas filtras "Text files (*.txt)|*.txt";
	{
		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(saveFileDialog1->FileName);	// susiejame įrašimo srautą su atvertu failu kurio kelias
		// paimtas iš saveFileDialog1->FileName
		sw->Write(z);																				// Įrašome textBox1->Text lauko tekstą į atvertą failą
		sw->Close();																				// uždarome srautą ir failą 
	}
	else MessageBox::Show("Error on file input", "Error", MessageBoxButtons::OK);						// pranešimas sapie klaidą, išveda pranešimą, 
	// užvardintą kaip "Error" su mygtuku OK


}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ z;
	if (textBox1->Text == "") z = " ";																	// tikriname ar textBox1->Text nera tuščias ir jei taip įrašome į jį tarpą
	else z = textBox1->Text;
	if (failo_vardas != "")																				// tikriname ar prieš tai atvertas failas egzistuoja ar ne
	{
		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(failo_vardas);					// susiejame įrašimo srautą su atvertu failu kurio kelias saugomas failo_vardas 
		sw->Write(z);																					// Įrašome textBox1->Text lauko tekstą į atvertą failą
		sw->Close();																					// uždarome srautą ir failą
		MessageBox::Show("The file has been successfully\nrewritten",									// pranešimas apie sekmingą perrašimą, išveda pranešimą, 
			"Information", MessageBoxButtons::OK);														// užvardintą kaip "Information" su mygtuku OK
	}
	else MessageBox::Show("You forgot open file", "File open Error", MessageBoxButtons::OK);			// pranešimas apie klaidą, išveda pranešimą, 
	//užvardintą kaip "File open Error" su mygtuku OK

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Form1::Close();
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	button2_Click(sender, e);
}
private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	button3_Click(sender, e);
}
private: System::Void menuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	button1_Click(sender, e);
}
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	button4_Click(sender, e);
}
};
}
