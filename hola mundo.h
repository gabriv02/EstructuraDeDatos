#pragma once

namespace holamundo {

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
	private: System::Windows::Forms::Label^  lbl;
	private: System::Windows::Forms::TextBox^  txtmensaje;

	private: System::Windows::Forms::Button^  button;


	protected: 

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
			this->lbl = (gcnew System::Windows::Forms::Label());
			this->txtmensaje = (gcnew System::Windows::Forms::TextBox());
			this->button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbl
			// 
			this->lbl->AutoSize = true;
			this->lbl->Location = System::Drawing::Point(90, 108);
			this->lbl->Name = L"lbl";
			this->lbl->Size = System::Drawing::Size(84, 17);
			this->lbl->TabIndex = 0;
			this->lbl->Text = L"Hola mundo";
			this->lbl->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// txtmensaje
			// 
			this->txtmensaje->Location = System::Drawing::Point(84, 149);
			this->txtmensaje->Name = L"txtmensaje";
			this->txtmensaje->Size = System::Drawing::Size(100, 22);
			this->txtmensaje->TabIndex = 1;
			// 
			// button
			// 
			this->button->Location = System::Drawing::Point(99, 51);
			this->button->Name = L"button";
			this->button->Size = System::Drawing::Size(75, 23);
			this->button->TabIndex = 2;
			this->button->Text = L"Mensaje";
			this->button->UseVisualStyleBackColor = true;
			this->button->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->button);
			this->Controls->Add(this->txtmensaje);
			this->Controls->Add(this->lbl);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 txtmensaje->Text="Hola Mundo";
			 }
	};
}

