#pragma once
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdlib.h>
#include <string.h>
#include <msclr\marshal_cppstd.h>


namespace Calculaor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace msclr::interop;

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
	private: System::Windows::Forms::Button^  KineticEnergy;
	protected: 


	private: System::Windows::Forms::TextBox^  Mass;
	private: System::Windows::Forms::TextBox^  Frameper10cm;

	private: System::Windows::Forms::TextBox^  FrameRotation;
	private: System::Windows::Forms::TextBox^  FramesToStop;
	private: System::Windows::Forms::TextBox^  StoppingDistance;

	private: System::Windows::Forms::TextBox^  Framerate;
	private: System::Windows::Forms::Button^  Friction;
	private: System::Windows::Forms::Button^  RotationSpeed;
	private: System::Windows::Forms::TextBox^  KEOutput;
	private: System::Windows::Forms::TextBox^  RotationOutput;





	private: System::Windows::Forms::TextBox^  FrictionOutput;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;


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
			this->KineticEnergy = (gcnew System::Windows::Forms::Button());
			this->Mass = (gcnew System::Windows::Forms::TextBox());
			this->Frameper10cm = (gcnew System::Windows::Forms::TextBox());
			this->FrameRotation = (gcnew System::Windows::Forms::TextBox());
			this->FramesToStop = (gcnew System::Windows::Forms::TextBox());
			this->StoppingDistance = (gcnew System::Windows::Forms::TextBox());
			this->Framerate = (gcnew System::Windows::Forms::TextBox());
			this->Friction = (gcnew System::Windows::Forms::Button());
			this->RotationSpeed = (gcnew System::Windows::Forms::Button());
			this->KEOutput = (gcnew System::Windows::Forms::TextBox());
			this->RotationOutput = (gcnew System::Windows::Forms::TextBox());
			this->FrictionOutput = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// KineticEnergy
			// 
			this->KineticEnergy->Location = System::Drawing::Point(13, 169);
			this->KineticEnergy->Name = L"KineticEnergy";
			this->KineticEnergy->Size = System::Drawing::Size(101, 45);
			this->KineticEnergy->TabIndex = 0;
			this->KineticEnergy->Text = L"Kinetic Energy";
			this->KineticEnergy->UseVisualStyleBackColor = true;
			this->KineticEnergy->Click += gcnew System::EventHandler(this, &Form1::KineticEnergy_Click);
			// 
			// Mass
			// 
			this->Mass->Location = System::Drawing::Point(13, 39);
			this->Mass->Name = L"Mass";
			this->Mass->Size = System::Drawing::Size(195, 20);
			this->Mass->TabIndex = 2;
			this->Mass->Text = L"Mass (grams)";
			// 
			// Frameper10cm
			// 
			this->Frameper10cm->Location = System::Drawing::Point(13, 65);
			this->Frameper10cm->Name = L"Frameper10cm";
			this->Frameper10cm->Size = System::Drawing::Size(195, 20);
			this->Frameper10cm->TabIndex = 3;
			this->Frameper10cm->Text = L"Frames to cover 10cm";
			// 
			// FrameRotation
			// 
			this->FrameRotation->Location = System::Drawing::Point(13, 91);
			this->FrameRotation->Name = L"FrameRotation";
			this->FrameRotation->Size = System::Drawing::Size(195, 20);
			this->FrameRotation->TabIndex = 4;
			this->FrameRotation->Text = L"Frames for one rotation";
			// 
			// FramesToStop
			// 
			this->FramesToStop->Location = System::Drawing::Point(13, 117);
			this->FramesToStop->Name = L"FramesToStop";
			this->FramesToStop->Size = System::Drawing::Size(195, 20);
			this->FramesToStop->TabIndex = 5;
			this->FramesToStop->Text = L"Frames to stop";
			// 
			// StoppingDistance
			// 
			this->StoppingDistance->Location = System::Drawing::Point(13, 143);
			this->StoppingDistance->Name = L"StoppingDistance";
			this->StoppingDistance->Size = System::Drawing::Size(195, 20);
			this->StoppingDistance->TabIndex = 6;
			this->StoppingDistance->Text = L"Distance to stop (cm)";
			// 
			// Framerate
			// 
			this->Framerate->Location = System::Drawing::Point(13, 13);
			this->Framerate->Name = L"Framerate";
			this->Framerate->Size = System::Drawing::Size(195, 20);
			this->Framerate->TabIndex = 8;
			this->Framerate->Text = L"Framerate (Frames / sec)";
			// 
			// Friction
			// 
			this->Friction->Location = System::Drawing::Point(12, 220);
			this->Friction->Name = L"Friction";
			this->Friction->Size = System::Drawing::Size(101, 45);
			this->Friction->TabIndex = 10;
			this->Friction->Text = L"Friction";
			this->Friction->UseVisualStyleBackColor = true;
			this->Friction->Click += gcnew System::EventHandler(this, &Form1::Friction_Click);
			// 
			// RotationSpeed
			// 
			this->RotationSpeed->Location = System::Drawing::Point(12, 271);
			this->RotationSpeed->Name = L"RotationSpeed";
			this->RotationSpeed->Size = System::Drawing::Size(101, 45);
			this->RotationSpeed->TabIndex = 11;
			this->RotationSpeed->Text = L"Rotational speed";
			this->RotationSpeed->UseVisualStyleBackColor = true;
			this->RotationSpeed->Click += gcnew System::EventHandler(this, &Form1::RotationSpeed_Click);
			// 
			// KEOutput
			// 
			this->KEOutput->Location = System::Drawing::Point(121, 193);
			this->KEOutput->Name = L"KEOutput";
			this->KEOutput->ReadOnly = true;
			this->KEOutput->Size = System::Drawing::Size(192, 20);
			this->KEOutput->TabIndex = 12;
			// 
			// RotationOutput
			// 
			this->RotationOutput->Location = System::Drawing::Point(119, 296);
			this->RotationOutput->Name = L"RotationOutput";
			this->RotationOutput->ReadOnly = true;
			this->RotationOutput->Size = System::Drawing::Size(192, 20);
			this->RotationOutput->TabIndex = 13;
			// 
			// FrictionOutput
			// 
			this->FrictionOutput->Location = System::Drawing::Point(119, 245);
			this->FrictionOutput->Name = L"FrictionOutput";
			this->FrictionOutput->ReadOnly = true;
			this->FrictionOutput->Size = System::Drawing::Size(192, 20);
			this->FrictionOutput->TabIndex = 14;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(121, 323);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 13);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Rotations per Second";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(124, 220);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Newtons";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(482, 412);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->FrictionOutput);
			this->Controls->Add(this->RotationOutput);
			this->Controls->Add(this->KEOutput);
			this->Controls->Add(this->RotationSpeed);
			this->Controls->Add(this->Friction);
			this->Controls->Add(this->Framerate);
			this->Controls->Add(this->StoppingDistance);
			this->Controls->Add(this->FramesToStop);
			this->Controls->Add(this->FrameRotation);
			this->Controls->Add(this->Frameper10cm);
			this->Controls->Add(this->Mass);
			this->Controls->Add(this->KineticEnergy);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void KineticEnergy_Click(System::Object^  sender, System::EventArgs^  e) 
		 {		// mass is in grams, speed is in cm per second, so need to divide mass by 1k and speed by 100 to get Kg and M
			 string Massstr = marshal_as<std::string>(this->Mass->Text);
			 string frameratestr = marshal_as<std::string>(this->Framerate->Text);
			 string Fp10str = marshal_as<std::string>(this->Frameper10cm->Text);
			 double Mass = atof(Massstr.c_str());
			 double Framerate = atof(frameratestr.c_str());
			 double Fp10 = atof(Fp10str.c_str());
			 double velocity =  Framerate * Fp10;
			 double KineticEnergy = (.5) * ( Mass / 1000 ) * pow(( velocity / 100),2.0);
			 this->KEOutput->Text = KineticEnergy.ToString();


		 }
private: System::Void Friction_Click(System::Object^  sender, System::EventArgs^  e) 
		 {		// need to finish
			 string stoppingFramesstr = marshal_as<std::string>(this->FramesToStop->Text);
			 string stoppingDistancestr = marshal_as<std::string>(this->StoppingDistance->Text);
			 double stoppingFrames = atof(stoppingFramesstr.c_str());
			 double stoppingDistance = atof(stoppingDistancestr.c_str());

		 }
private: System::Void RotationSpeed_Click(System::Object^  sender, System::EventArgs^  e) 
		 {		// check formula for correctness, using frames per rotation divided by seconds between frames
			 string frameratestr = marshal_as<std::string>(this->Framerate->Text);
			 string FrameRotationstr = marshal_as<std::string>(this->FrameRotation->Text);
			 double Framerate = atof(frameratestr.c_str());
			 double FrameRotation = atof(FrameRotationstr.c_str());
			 double Time = Framerate;
			 double FrameRotationResult = 1 / (FrameRotation / Time);
			 this->RotationOutput->Text = FrameRotationResult.ToString();
		 }
};
}

