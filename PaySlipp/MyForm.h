#pragma once

#include "EmployeeData.h";
#include "Datas.h";

namespace PaySlipp {

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
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::ComboBox^ cbJob;
protected:

private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::TextBox^ tbDaysOfWork;

private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::RadioButton^ rbYes;

private: System::Windows::Forms::RadioButton^ rbNo;
private: System::Windows::Forms::Label^ label5;

private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::TextBox^ tbFirstName;

private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::TextBox^ tbLastName;

private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::RadioButton^ rbFemale;
private: System::Windows::Forms::RadioButton^ rbMale;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Button^ btnSubmit;
private: System::Windows::Forms::GroupBox^ groupBox1;
private: System::Windows::Forms::GroupBox^ groupBox2;
private: System::Windows::Forms::TextBox^ tbDaysOWSunday;


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
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->cbJob = (gcnew System::Windows::Forms::ComboBox());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->label3 = (gcnew System::Windows::Forms::Label());
		this->tbDaysOfWork = (gcnew System::Windows::Forms::TextBox());
		this->label4 = (gcnew System::Windows::Forms::Label());
		this->rbYes = (gcnew System::Windows::Forms::RadioButton());
		this->rbNo = (gcnew System::Windows::Forms::RadioButton());
		this->label5 = (gcnew System::Windows::Forms::Label());
		this->label6 = (gcnew System::Windows::Forms::Label());
		this->tbFirstName = (gcnew System::Windows::Forms::TextBox());
		this->label7 = (gcnew System::Windows::Forms::Label());
		this->tbLastName = (gcnew System::Windows::Forms::TextBox());
		this->label8 = (gcnew System::Windows::Forms::Label());
		this->label9 = (gcnew System::Windows::Forms::Label());
		this->rbFemale = (gcnew System::Windows::Forms::RadioButton());
		this->rbMale = (gcnew System::Windows::Forms::RadioButton());
		this->label10 = (gcnew System::Windows::Forms::Label());
		this->btnSubmit = (gcnew System::Windows::Forms::Button());
		this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
		this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
		this->tbDaysOWSunday = (gcnew System::Windows::Forms::TextBox());
		this->groupBox1->SuspendLayout();
		this->SuspendLayout();
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label1->Location = System::Drawing::Point(42, 112);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(141, 20);
		this->label1->TabIndex = 0;
		this->label1->Text = L"What Is Your Job\?";
		// 
		// cbJob
		// 
		this->cbJob->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
		this->cbJob->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->cbJob->FormattingEnabled = true;
		this->cbJob->Items->AddRange(gcnew cli::array< System::Object^  >(16) {
			L"Foreman", L"Leadman", L"Service Driver", L"Timekeeper",
				L"Warehouseman", L"Welder", L"Fabricator", L"Master Painter", L"Painter", L"Plumber", L"Electrician", L"Mason", L"Tile Setter",
				L"Carpenter", L"Laborer", L"Housekeeper/Cleaner"
		});
		this->cbJob->Location = System::Drawing::Point(189, 112);
		this->cbJob->Name = L"cbJob";
		this->cbJob->Size = System::Drawing::Size(121, 28);
		this->cbJob->TabIndex = 1;
		// 
		// label2
		// 
		this->label2->AutoSize = true;
		this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label2->Location = System::Drawing::Point(195, 9);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(272, 37);
		this->label2->TabIndex = 2;
		this->label2->Text = L"Fukiko Company";
		// 
		// label3
		// 
		this->label3->AutoSize = true;
		this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label3->Location = System::Drawing::Point(42, 165);
		this->label3->Name = L"label3";
		this->label3->Size = System::Drawing::Size(127, 40);
		this->label3->TabIndex = 3;
		this->label3->Text = L"How Many Days \r\nDid You Work\?\r\n";
		// 
		// tbDaysOfWork
		// 
		this->tbDaysOfWork->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->tbDaysOfWork->Location = System::Drawing::Point(189, 179);
		this->tbDaysOfWork->Name = L"tbDaysOfWork";
		this->tbDaysOfWork->Size = System::Drawing::Size(121, 26);
		this->tbDaysOfWork->TabIndex = 4;
		this->tbDaysOfWork->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
		// 
		// label4
		// 
		this->label4->AutoSize = true;
		this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label4->Location = System::Drawing::Point(42, 233);
		this->label4->Name = L"label4";
		this->label4->Size = System::Drawing::Size(123, 40);
		this->label4->TabIndex = 5;
		this->label4->Text = L"Did You Work\r\nDuring Sunday\?\r\n";
		// 
		// rbYes
		// 
		this->rbYes->AutoSize = true;
		this->rbYes->Checked = true;
		this->rbYes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->rbYes->Location = System::Drawing::Point(12, 19);
		this->rbYes->Name = L"rbYes";
		this->rbYes->Size = System::Drawing::Size(55, 24);
		this->rbYes->TabIndex = 6;
		this->rbYes->TabStop = true;
		this->rbYes->Text = L"Yes";
		this->rbYes->UseVisualStyleBackColor = true;
		// 
		// rbNo
		// 
		this->rbNo->AutoSize = true;
		this->rbNo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->rbNo->Location = System::Drawing::Point(73, 19);
		this->rbNo->Name = L"rbNo";
		this->rbNo->Size = System::Drawing::Size(47, 24);
		this->rbNo->TabIndex = 7;
		this->rbNo->Text = L"No";
		this->rbNo->UseVisualStyleBackColor = true;
		this->rbNo->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbNo_CheckedChanged);
		// 
		// label5
		// 
		this->label5->AutoSize = true;
		this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label5->Location = System::Drawing::Point(42, 307);
		this->label5->Name = L"label5";
		this->label5->Size = System::Drawing::Size(132, 20);
		this->label5->TabIndex = 8;
		this->label5->Text = L"How Many Days\?\r\n";
		// 
		// label6
		// 
		this->label6->AutoSize = true;
		this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label6->Location = System::Drawing::Point(348, 93);
		this->label6->Name = L"label6";
		this->label6->Size = System::Drawing::Size(133, 20);
		this->label6->TabIndex = 10;
		this->label6->Text = L"Enter First Name:";
		// 
		// tbFirstName
		// 
		this->tbFirstName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->tbFirstName->Location = System::Drawing::Point(352, 125);
		this->tbFirstName->Name = L"tbFirstName";
		this->tbFirstName->Size = System::Drawing::Size(121, 26);
		this->tbFirstName->TabIndex = 11;
		this->tbFirstName->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
		// 
		// label7
		// 
		this->label7->AutoSize = true;
		this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label7->Location = System::Drawing::Point(497, 93);
		this->label7->Name = L"label7";
		this->label7->Size = System::Drawing::Size(133, 20);
		this->label7->TabIndex = 12;
		this->label7->Text = L"Enter Last Name:";
		// 
		// tbLastName
		// 
		this->tbLastName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->tbLastName->Location = System::Drawing::Point(501, 125);
		this->tbLastName->Name = L"tbLastName";
		this->tbLastName->Size = System::Drawing::Size(121, 26);
		this->tbLastName->TabIndex = 13;
		this->tbLastName->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
		// 
		// label8
		// 
		this->label8->AutoSize = true;
		this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label8->Location = System::Drawing::Point(403, 60);
		this->label8->Name = L"label8";
		this->label8->Size = System::Drawing::Size(176, 20);
		this->label8->TabIndex = 14;
		this->label8->Text = L"Personal Information";
		// 
		// label9
		// 
		this->label9->AutoSize = true;
		this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label9->Location = System::Drawing::Point(379, 182);
		this->label9->Name = L"label9";
		this->label9->Size = System::Drawing::Size(40, 20);
		this->label9->TabIndex = 15;
		this->label9->Text = L"Sex:";
		// 
		// rbFemale
		// 
		this->rbFemale->AutoSize = true;
		this->rbFemale->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->rbFemale->Location = System::Drawing::Point(499, 180);
		this->rbFemale->Name = L"rbFemale";
		this->rbFemale->Size = System::Drawing::Size(80, 24);
		this->rbFemale->TabIndex = 17;
		this->rbFemale->Text = L"Female";
		this->rbFemale->UseVisualStyleBackColor = true;
		// 
		// rbMale
		// 
		this->rbMale->AutoSize = true;
		this->rbMale->Checked = true;
		this->rbMale->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->rbMale->Location = System::Drawing::Point(432, 180);
		this->rbMale->Name = L"rbMale";
		this->rbMale->Size = System::Drawing::Size(61, 24);
		this->rbMale->TabIndex = 16;
		this->rbMale->TabStop = true;
		this->rbMale->Text = L"Male";
		this->rbMale->UseVisualStyleBackColor = true;
		// 
		// label10
		// 
		this->label10->AutoSize = true;
		this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label10->Location = System::Drawing::Point(113, 60);
		this->label10->Name = L"label10";
		this->label10->Size = System::Drawing::Size(134, 20);
		this->label10->TabIndex = 18;
		this->label10->Text = L"Job Description";
		// 
		// btnSubmit
		// 
		this->btnSubmit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->btnSubmit->Location = System::Drawing::Point(381, 246);
		this->btnSubmit->Name = L"btnSubmit";
		this->btnSubmit->Size = System::Drawing::Size(219, 57);
		this->btnSubmit->TabIndex = 19;
		this->btnSubmit->Text = L"Submit";
		this->btnSubmit->UseVisualStyleBackColor = true;
		this->btnSubmit->Click += gcnew System::EventHandler(this, &MyForm::btnSubmit_Click);
		// 
		// groupBox1
		// 
		this->groupBox1->Controls->Add(this->rbYes);
		this->groupBox1->Controls->Add(this->rbNo);
		this->groupBox1->Location = System::Drawing::Point(180, 233);
		this->groupBox1->Name = L"groupBox1";
		this->groupBox1->Size = System::Drawing::Size(141, 58);
		this->groupBox1->TabIndex = 20;
		this->groupBox1->TabStop = false;
		// 
		// groupBox2
		// 
		this->groupBox2->Location = System::Drawing::Point(425, 157);
		this->groupBox2->Name = L"groupBox2";
		this->groupBox2->Size = System::Drawing::Size(161, 66);
		this->groupBox2->TabIndex = 21;
		this->groupBox2->TabStop = false;
		// 
		// tbDaysOWSunday
		// 
		this->tbDaysOWSunday->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->tbDaysOWSunday->Location = System::Drawing::Point(189, 301);
		this->tbDaysOWSunday->Name = L"tbDaysOWSunday";
		this->tbDaysOWSunday->Size = System::Drawing::Size(121, 26);
		this->tbDaysOWSunday->TabIndex = 22;
		this->tbDaysOWSunday->Text = L"0";
		this->tbDaysOWSunday->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
		// 
		// MyForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(661, 361);
		this->Controls->Add(this->tbDaysOWSunday);
		this->Controls->Add(this->btnSubmit);
		this->Controls->Add(this->label10);
		this->Controls->Add(this->rbFemale);
		this->Controls->Add(this->rbMale);
		this->Controls->Add(this->label9);
		this->Controls->Add(this->label8);
		this->Controls->Add(this->tbLastName);
		this->Controls->Add(this->label7);
		this->Controls->Add(this->tbFirstName);
		this->Controls->Add(this->label6);
		this->Controls->Add(this->label5);
		this->Controls->Add(this->label4);
		this->Controls->Add(this->tbDaysOfWork);
		this->Controls->Add(this->label3);
		this->Controls->Add(this->label2);
		this->Controls->Add(this->cbJob);
		this->Controls->Add(this->label1);
		this->Controls->Add(this->groupBox1);
		this->Controls->Add(this->groupBox2);
		this->Name = L"MyForm";
		this->Text = L"Payslip";
		this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
		this->groupBox1->ResumeLayout(false);
		this->groupBox1->PerformLayout();
		this->ResumeLayout(false);
		this->PerformLayout();

	}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

		cbJob->SelectedIndex = 11;
	}


	private: System::Void btnSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
		
		String^ job;
		int daysOfWork;
		String^ workDuringSunday;
		int daysOWSunday = 0;

		String^ firstName = "";
		String^ lastName = "";
		String^ Sex;

		bool isValid = true, isZero = true;
		
		double salary = 0;
		double salaryMonth = 0;
		double salaryWithOT = 0;
		double salaryWithD = 0;

		job = cbJob->Text;
		if (cbJob->SelectedIndex == 0) {
			salary = 1500.00;
		}
		else if(cbJob->SelectedIndex == 1) {
			salary = 1000.00;
		}
		else if (cbJob->SelectedIndex == 2 || cbJob->SelectedIndex == 3 || cbJob->SelectedIndex == 4 || cbJob->SelectedIndex == 8 || cbJob->SelectedIndex == 11 || cbJob->SelectedIndex == 12 || cbJob->SelectedIndex == 13) {
			salary = 800.00;
		}
		else if (cbJob->SelectedIndex == 5 || cbJob->SelectedIndex == 6 || cbJob->SelectedIndex == 9 || cbJob->SelectedIndex == 10) {
			salary = 900.00;
		}
		else if (cbJob->SelectedIndex == 14) {
			salary = 550.00;
		}
		else {
			salary = 450.00;
		}

		// Convert the daysOfWork from String^ to int
		if (Int32::TryParse(tbDaysOfWork->Text, daysOfWork)) {
			if (daysOfWork <= 31){
				salaryMonth = daysOfWork * salary;

				salaryWithD = salaryMonth - (salaryMonth * .04); //Philhealth Deduction
				
				//Pag-Ibig Deduction
				if (salaryMonth >= 1501.01) salaryWithD = salaryWithD - (salaryMonth * .02);
				else salaryWithD = salaryWithD - (salaryMonth * .01);

				//SSS Deduction
				if(salaryMonth <= 20000) salaryWithD -= 500;
				else salaryWithD -= 1000;

			}
			else {
				MessageBox::Show("Invalid input for days of work.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return; // Exit the method
			}
		}
		else {
			MessageBox::Show("Enter days of work.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return; // Exit the method
		}


		if (rbYes->Checked) {
			workDuringSunday = rbYes->Text;

			if (Int32::TryParse(tbDaysOWSunday->Text, daysOWSunday)){
	
				if (daysOWSunday == 0) {
					MessageBox::Show("Enter The Days You Work On Sunday.", "Error", MessageBoxButtons::RetryCancel, MessageBoxIcon::Error);
					isZero = false;
					return;
				}
				else if (daysOWSunday <= 4) {
					salaryWithOT = daysOWSunday * (salary * .3);
					salaryMonth += salaryWithOT;

					salaryWithD = salaryMonth - (salaryMonth * .04); //Philhealth Deduction

					//Pag-Ibig Deduction
					if (salaryMonth >= 1501.01) salaryWithD = salaryWithD - (salaryMonth * .02);
					else salaryWithD = salaryWithD - (salaryMonth * .01);

					//SSS Deduction
					if (salaryMonth <= 20000) salaryWithD -= 500;
					else salaryWithD -= 1000;
				}
				else {
					MessageBox::Show("There are only 4 Sundays in a month.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return; // Exit the method
				}
			}
		}
		else {
			workDuringSunday = rbNo->Text;
		}

		if (tbFirstName->Text->Trim()->Length > 1) firstName = tbFirstName->Text;
		else isValid = false;

		if (tbLastName->Text->Trim()->Length > 1) lastName = tbLastName->Text;
		else isValid = false;

		if (rbMale->Checked) Sex = rbMale->Text;
		else Sex = rbFemale->Text;

		if (isValid) {

			Datas^ datas = gcnew Datas();
			datas->setPayroll(firstName, lastName, Sex, job, salary, salaryMonth, salaryWithD);

			EmployeeData^ ed = gcnew EmployeeData();
			ed->datas = datas;
			ed->Show();
			Hide();

		}
		else if (firstName == "") {
			MessageBox::Show("Enter Your First Name", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (lastName == ""){
			MessageBox::Show("Enter Your Last Name", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (isZero = false) {
			MessageBox::Show("Enter the days you worked on Sunday.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else{
			MessageBox::Show("First Name and Last Name Should be 2 or More Characters", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		
	}
	private:System::Void rbNo_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (rbNo->Checked) {
			tbDaysOWSunday->Enabled = false;
		}
		else tbDaysOWSunday->Enabled = true;
	}


	
		   
};
}
