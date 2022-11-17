#pragma once
#include "pch.h"
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
	private: System::Windows::Forms::Button^ bouton;
	protected:

	private: System::Windows::Forms::Label^ Welcome;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: int i = 0;
	private: array<String^>^ chemin_images;
	private: System::Windows::Forms::FolderBrowserDialog^ ouverture;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ copier;
	private: System::Windows::Forms::FolderBrowserDialog^ copie;
	private: System::Windows::Forms::Button^ deplacer;
	private: System::Windows::Forms::FolderBrowserDialog^ deplacement;
	private: System::Windows::Forms::Label^ Error;
	private: System::String^ chemin_actuel;







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
			this->ouverture = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->copie = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->deplacement = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->bouton = (gcnew System::Windows::Forms::Button());
			this->Welcome = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->copier = (gcnew System::Windows::Forms::Button());
			this->deplacer = (gcnew System::Windows::Forms::Button());
			this->Error = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// bouton
			// 
			this->bouton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->bouton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
			this->bouton->Location = System::Drawing::Point(633, 600);
			this->bouton->Name = L"bouton";
			this->bouton->Size = System::Drawing::Size(300, 49);
			this->bouton->TabIndex = 0;
			this->bouton->Text = L"supprimer";
			this->bouton->UseVisualStyleBackColor = true;
			this->bouton->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Welcome
			// 
			this->Welcome->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->Welcome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->Welcome->Location = System::Drawing::Point(31, 632);
			this->Welcome->Name = L"Welcome";
			this->Welcome->Size = System::Drawing::Size(558, 22);
			this->Welcome->TabIndex = 1;
			this->Welcome->Text = L"nom fichier";
			this->Welcome->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->ImageLocation = L"C:\\Users\\jeann\\OneDrive\\Documents\\cesi\\A2\\Poo\\prosit 5\\prosit 5\\Image\\shrek (2).p"
				L"ng";
			this->pictureBox1->Location = System::Drawing::Point(12, 41);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(604, 590);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->button1->Location = System::Drawing::Point(622, 41);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 70);
			this->button1->TabIndex = 3;
			this->button1->Text = L"<";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(622, 114);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 70);
			this->button2->TabIndex = 4;
			this->button2->Text = L">";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"ouvrir";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// copier
			// 
			this->copier->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->copier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F));
			this->copier->Location = System::Drawing::Point(633, 545);
			this->copier->Name = L"copier";
			this->copier->Size = System::Drawing::Size(300, 49);
			this->copier->TabIndex = 6;
			this->copier->Text = L"copier";
			this->copier->UseVisualStyleBackColor = true;
			this->copier->Click += gcnew System::EventHandler(this, &Form1::copier_Click);
			// 
			// deplacer
			// 
			this->deplacer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->deplacer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F));
			this->deplacer->Location = System::Drawing::Point(633, 490);
			this->deplacer->Name = L"deplacer";
			this->deplacer->Size = System::Drawing::Size(300, 49);
			this->deplacer->TabIndex = 7;
			this->deplacer->Text = L"Deplacer";
			this->deplacer->UseVisualStyleBackColor = true;
			this->deplacer->Click += gcnew System::EventHandler(this, &Form1::deplacer_Click);
			// 
			// Error
			// 
			this->Error->AutoSize = true;
			this->Error->Location = System::Drawing::Point(104, 15);
			this->Error->Name = L"Error";
			this->Error->Size = System::Drawing::Size(36, 16);
			this->Error->TabIndex = 8;
			this->Error->Text = L"Error";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(945, 661);
			this->Controls->Add(this->Error);
			this->Controls->Add(this->deplacer);
			this->Controls->Add(this->copier);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Welcome);
			this->Controls->Add(this->bouton);
			this->MaximumSize = System::Drawing::Size(963, 708);
			this->MinimumSize = System::Drawing::Size(963, 708);
			this->Name = L"Form1";
			this->Text = L"Prosit 5";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


// chargement de la page
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		chemin_images = System::IO::Directory::GetFiles("C:\\Users\\jeann\\OneDrive\\Documents\\cesi\\A2\\Poo\\prosit 5\\prosit 5\\photo");
		chemin_actuel = "C:\\Users\\jeann\\OneDrive\\Documents\\cesi\\A2\\Poo\\prosit 5\\prosit 5\\photo";
		this->Welcome->Text = System::IO::Path::GetFileName(chemin_images[i]);
		this->pictureBox1->ImageLocation = chemin_images[i];
		this->Error->Text = "";
	}
// bouton supprimer
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::IO::File::Delete(chemin_images[i]);
		chemin_images = System::IO::Directory::GetFiles(chemin_actuel);
		i = 0;
		this->pictureBox1->ImageLocation = chemin_images[i];
		this->Welcome->Text = System::IO::Path::GetFileName(chemin_images[i]);
		this->Error->Text = "";

	}
// bouton gauche
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Welcome->Text = "gauche";
		if (i == 0)
		{
			i = 0;
		}
		else
		{
			i--;
		}
		this->pictureBox1->ImageLocation = chemin_images[i];
		this->Welcome->Text = System::IO::Path::GetFileName(chemin_images[i]);
		this->Error->Text = "";
	}
// bouton droite
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Error->Text = "";
		this->Welcome->Text = "droite";
		if (i == chemin_images->Length -1 )
		{
			i = chemin_images->Length - 1;
		}
		else
		{
			i++;
		}
		this->pictureBox1->ImageLocation = chemin_images[i];
		this->Welcome->Text = System::IO::Path::GetFileName(chemin_images[i]);

}


//bouton ouvrir
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Error->Text = "";
	this-> ouverture->ShowDialog();
	chemin_actuel = this->ouverture->SelectedPath;
	chemin_images = System::IO::Directory::GetFiles(chemin_actuel);
	i = 0;
	this->pictureBox1->ImageLocation = chemin_images[i];
	this->Welcome->Text = System::IO::Path::GetFileName(chemin_images[i]);
}

//bouton copier
private: System::Void copier_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Error->Text = "";
	this->copie->ShowDialog();
	System::IO::File::Copy(chemin_images[i], this->copie->SelectedPath + "\\" +"copie_" + System::IO::Path::GetFileName(chemin_images[i]));
	chemin_images = System::IO::Directory::GetFiles(chemin_actuel);
	i = 0;
	this->pictureBox1->ImageLocation = chemin_images[i];
	this->Welcome->Text = System::IO::Path::GetFileName(chemin_images[i]);
}


//bouton deplacer
private: System::Void deplacer_Click(System::Object^ sender, System::EventArgs^ e) {
	this->deplacement->ShowDialog();
	if (this->deplacement->SelectedPath == chemin_actuel)
	{
		this->Error->Text = "veuillez selectionner un dossier de destination different du dossier source";
	}
	else
	{
		this->Error->Text = "";
		System::IO::File::Copy(chemin_images[i], this->deplacement->SelectedPath + "\\" + System::IO::Path::GetFileName(chemin_images[i]));
		System::IO::File::Delete(chemin_images[i]);
		chemin_images = System::IO::Directory::GetFiles(chemin_actuel);
		i = 0;
		this->pictureBox1->ImageLocation = chemin_images[i];
		this->Welcome->Text = System::IO::Path::GetFileName(chemin_images[i]);
	}
}
};
}
