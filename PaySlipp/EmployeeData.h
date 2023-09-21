#pragma once

#include "Datas.h";

namespace PaySlipp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EmployeeData
	/// </summary>
	public ref class EmployeeData : public System::Windows::Forms::Form
	{
	public:
		
		
			Datas^ datas = gcnew Datas();
			// Rest of your constructor code
		

	public:
		EmployeeData(void)
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
		~EmployeeData()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ txtFullName;
	private: System::Windows::Forms::Label^ txtSex;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ txtJob;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ txtSalaryWD;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ txtMSalary;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ txtSalary;

	private: System::Windows::Forms::Label^ label13;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtFullName = (gcnew System::Windows::Forms::Label());
			this->txtSex = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtJob = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtSalaryWD = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtMSalary = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtSalary = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(87, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(242, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Payroll System";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(41, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Full Name           ";
			// 
			// txtFullName
			// 
			this->txtFullName->AutoSize = true;
			this->txtFullName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFullName->Location = System::Drawing::Point(196, 76);
			this->txtFullName->Name = L"txtFullName";
			this->txtFullName->Size = System::Drawing::Size(0, 20);
			this->txtFullName->TabIndex = 2;
			// 
			// txtSex
			// 
			this->txtSex->AutoSize = true;
			this->txtSex->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSex->Location = System::Drawing::Point(196, 112);
			this->txtSex->Name = L"txtSex";
			this->txtSex->Size = System::Drawing::Size(0, 20);
			this->txtSex->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(41, 112);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(144, 20);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Sex                     ";
			// 
			// txtJob
			// 
			this->txtJob->AutoSize = true;
			this->txtJob->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtJob->Location = System::Drawing::Point(196, 149);
			this->txtJob->Name = L"txtJob";
			this->txtJob->Size = System::Drawing::Size(0, 20);
			this->txtJob->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(41, 149);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(143, 20);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Job                     ";
			// 
			// txtSalaryWD
			// 
			this->txtSalaryWD->AutoSize = true;
			this->txtSalaryWD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSalaryWD->Location = System::Drawing::Point(196, 282);
			this->txtSalaryWD->Name = L"txtSalaryWD";
			this->txtSalaryWD->Size = System::Drawing::Size(0, 20);
			this->txtSalaryWD->TabIndex = 12;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(41, 259);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(146, 60);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Total Salary with \r\nTax Deduction    \r\n\r\n";
			// 
			// txtMSalary
			// 
			this->txtMSalary->AutoSize = true;
			this->txtMSalary->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMSalary->Location = System::Drawing::Point(196, 225);
			this->txtMSalary->Name = L"txtMSalary";
			this->txtMSalary->Size = System::Drawing::Size(0, 20);
			this->txtMSalary->TabIndex = 10;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(41, 225);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(142, 20);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Monthy Salary    ";
			// 
			// txtSalary
			// 
			this->txtSalary->AutoSize = true;
			this->txtSalary->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSalary->Location = System::Drawing::Point(196, 189);
			this->txtSalary->Name = L"txtSalary";
			this->txtSalary->Size = System::Drawing::Size(0, 20);
			this->txtSalary->TabIndex = 8;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(41, 189);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(144, 20);
			this->label13->TabIndex = 7;
			this->label13->Text = L"Salary                 ";
			this->label13->Click += gcnew System::EventHandler(this, &EmployeeData::label13_Click);
			// 
			// EmployeeData
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(415, 328);
			this->Controls->Add(this->txtSalaryWD);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtMSalary);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txtSalary);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->txtJob);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtSex);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtFullName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"EmployeeData";
			this->Text = L"EmployeeData";
			this->Load += gcnew System::EventHandler(this, &EmployeeData::EmployeeData_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void EmployeeData_Load(System::Object^ sender, System::EventArgs^ e) {

		txtFullName->Text = datas->getFullName();
		txtSex->Text = datas->getSex();
		txtJob->Text = datas->getJob();
		
		double mySalary = datas->getSalary();
		String^ StringSalary = System::Convert::ToString(mySalary);
		txtSalary->Text = StringSalary + " Php.";

		double myMonthlySalary = datas->getMonthlySalary();
		String^ StringMonthlySalary = System::Convert::ToString(myMonthlySalary);
		txtMSalary->Text = StringMonthlySalary + " Php.";

		double myTotalSalary = datas->getTotalSalary();
		String^ StringMyTotalSalary = System::Convert::ToString(myTotalSalary);
		txtSalaryWD->Text = StringMyTotalSalary + " Php.";
		


	}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
