#include "citezin.h"

//Constructor
Citezin::Citezin(QString password, QString first, QString middle, QString last,
QString dob, QString ethnicity, QString nationality, QString gender,
QString phoneNumber, QString email, QString streetAddress, int postcode,
        QString nhi, QString clinicName, QString clinicAddress){
    this->password = password;
    this->firstName = first;
    this->middleName = middle;
    this->lastName = last;
    this->DOB = dob;
    this->ethnicity = ethnicity;
    this->nationality = nationality;
    this->gender = gender;
    this->phoneNumber = phoneNumber;
    this->email = email;
    this->streetAddress = streetAddress;
    this->postCode = postcode;
    this->NHINumber = nhi;
    this->clinicName = clinicName;
    this->clinicAddress = clinicAddress;
}

//Setter
void Citezin::setVaccineDetails(QString vaccineName, QString batchNumber1, QString batchNumber2,
QString batchNumber3, int numberOfDoses, QString timeOfFirstVaccine, QString timeOfSecondVaccine,
                       bool fullyVaccinated, QString covidVaccineNumber, QString timeOfBooster){
    this->vaccineName = vaccineName;
    this->batchNumber1 = batchNumber1;
    this->batchNumber2 = batchNumber2;
    this->batchNumber3 = batchNumber3;
    this->numberOfDoses = numberOfDoses;
    this->timeOfFirstVaccine = timeOfFirstVaccine;
    this->timeOfSecondVaccine = timeOfSecondVaccine;
    this->fullyVaccinated = fullyVaccinated;
    this->covidVaccineNumber = covidVaccineNumber;
    this->timeOfBooster = timeOfBooster;
}

//Setter
void Citezin::setTestDetails(QString covidTestDate, QString covidTestResult){
    this->covidTestDate = covidTestDate;
    this->covidTestResult = covidTestResult;
}

//Setter
void Citezin::setFileDetails(QString userPhotoFilepath, QString userDocumentFilePath,
     QString userDetailsFilePath, QString userQRFilepath, QString testResultFilePath){
    this->userPhotoFilepath = userPhotoFilepath;
    this->userDocumentFilePath = userDocumentFilePath;
    this->userDetailsFilePath = userDetailsFilePath;
    this->userQRFilepath = userQRFilepath;
    this->testResultFilePath = testResultFilePath;
}


//Getters
QString Citezin::getPassword(){
    return password;
}
QString Citezin::getFirstName(){
    return firstName;
}
QString Citezin::getMiddleName(){
    return middleName;
}
QString Citezin::getLastName(){
    return lastName;
}
QString Citezin::getDOB(){
    return DOB;
}
QString Citezin::getPhoneNumber(){
    return phoneNumber;
}
QString Citezin::getEthnicity(){
    return ethnicity;
}
QString Citezin::getNationality(){
    return nationality;
}
QString Citezin::getGender(){
    return gender;
}
QString Citezin::getStreetAddress(){
    return streetAddress;
}
int Citezin::getPostcode(){
    return postCode;
}

QString Citezin::getEmail(){
    return email;
}
QString Citezin::getNHINumber(){
    return this->NHINumber;
}
QString Citezin::getClinicName(){
    return clinicName;
}
QString Citezin::getClinicAddress(){
    return clinicAddress;
}
QString Citezin::getVaccineName(){
    return vaccineName;
}
QString Citezin::getBatchNumber1(){
    return batchNumber1;
}
QString Citezin::getBatchNumber2(){
    return batchNumber2;
}
QString Citezin::getBatchNumber3(){
    return batchNumber3;
}

int Citezin::getNumberOfDoses(){
    return numberOfDoses;
}
QString Citezin::getTimeOfFirstVaccine(){
    return timeOfFirstVaccine;
}
QString Citezin::getTimeOfSecondVaccine(){
    return timeOfSecondVaccine;
}
QString Citezin::getTimeOfBooster(){
    return timeOfBooster;
}
bool Citezin::getFullyVaccinated(){
    return fullyVaccinated;
}

QString Citezin::getCovidVaccineNumber(){
    return covidVaccineNumber;
}
QString Citezin::getCovidTestDate(){
    return covidTestDate;
}
QString Citezin::getCovidTestResult(){
    return covidTestResult;
}

//File Getters.
QString Citezin::getUserPhotoFilepath(){
    return userPhotoFilepath;
}
QString Citezin::getUserDocumentFilePath(){
    return userDocumentFilePath;
}
QString Citezin::getUserDetailsFilePath(){
    return userDetailsFilePath;
}
QString Citezin::getUserQRFilepath(){
    return userQRFilepath;
}

QString Citezin::getTestResultFilePath(){
    return testResultFilePath;
}
QString Citezin::getReportIssuesFilepath(){
    return reportIssuesFilepath;
}