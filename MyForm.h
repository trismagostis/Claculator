#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
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
	private: System::Windows::Forms::Button^ addBtn;
	private: System::Windows::Forms::TextBox^ number1TextBox;
	private: System::Windows::Forms::TextBox^ number2TextBox;
	protected:


	private: System::Windows::Forms::Label^ resultLabel;


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
			this->addBtn = (gcnew System::Windows::Forms::Button());
			this->number1TextBox = (gcnew System::Windows::Forms::TextBox());
			this->number2TextBox = (gcnew System::Windows::Forms::TextBox());
			this->resultLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// addBtn
			// 
			this->addBtn->Location = System::Drawing::Point(266, 178);
			this->addBtn->Name = L"addBtn";
			this->addBtn->Size = System::Drawing::Size(214, 78);
			this->addBtn->TabIndex = 1;
			this->addBtn->Text = L"add";
			this->addBtn->UseVisualStyleBackColor = true;
			this->addBtn->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// number1TextBox
			// 
			this->number1TextBox->Location = System::Drawing::Point(111, 34);
			this->number1TextBox->Name = L"number1TextBox";
			this->number1TextBox->Size = System::Drawing::Size(80, 20);
			this->number1TextBox->TabIndex = 2;
			// 
			// number2TextBox
			// 
			this->number2TextBox->Location = System::Drawing::Point(509, 34);
			this->number2TextBox->Name = L"number2TextBox";
			this->number2TextBox->Size = System::Drawing::Size(89, 20);
			this->number2TextBox->TabIndex = 3;
			// 
			// resultLabel
			// 
			this->resultLabel->AutoSize = true;
			this->resultLabel->Location = System::Drawing::Point(354, 386);
			this->resultLabel->Name = L"resultLabel";
			this->resultLabel->Size = System::Drawing::Size(0, 13);
			this->resultLabel->TabIndex = 4;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(896, 648);
			this->Controls->Add(this->resultLabel);
			this->Controls->Add(this->number2TextBox);
			this->Controls->Add(this->number1TextBox);
			this->Controls->Add(this->addBtn);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int output = System::Convert::ToInt16(number1TextBox->Text) + System::Convert::ToInt16(number2TextBox->Text);
		//String^ number1 = number1TextBox->Text;
		resultLabel->Text = number1TextBox->Text +  "+" + number2TextBox->Text + "=" + System::Convert::ToString(output);
	}
	};
}
