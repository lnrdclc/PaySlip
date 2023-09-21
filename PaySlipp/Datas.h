#pragma once

using namespace System;

public ref class Datas {

	private:
		String^ job;
		String^ firstName;
		String^ lastName;
		String^ Sex;

		Double salary;
		Double salaryMonth;
		Double salaryWithD;

		String^ mySalary;

	public:
		void setPayroll(String^ afirstName, String^ alastName, String^ aSex, String^ aJob, Double aSalary, Double aSalaryMonth, Double aSalaryWithD) {
			firstName = afirstName;
			lastName = alastName;
			Sex = aSex;
			job = aJob;
			salary = aSalary;
			salaryMonth = aSalaryMonth;
			salaryWithD = aSalaryWithD;
		}
		String^ getFirstName() {
			return firstName;
		}
		String^ getLastName() {
			return lastName;
		}
		String^ getFullName() {
			return firstName + " " + lastName;
		}
		String^ getSex() {
			return Sex;
		}
		String^ getJob() {
			return job;
		}
		Double getSalary() {
			 return salary;
		}
		Double getMonthlySalary() {
			return salaryMonth;
		}
		Double getTotalSalary() {
			return salaryWithD;
		}


};
