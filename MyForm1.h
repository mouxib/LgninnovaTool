#pragma once
#include "JailbreakSupportChecker.h"
#include "ScannForm2.h"

#include <msclr/marshal_cppstd.h>
#include <string>
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <Windows.h>
#include <msclr/marshal_cppstd.h>

namespace LgninnovaTool {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::Data::SqlClient;

	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	private:
		System::Windows::Forms::Timer^ autoRefreshTimer;

	public:
		MyForm1(void)
		{
			InitializeComponent();
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
		

		}

	protected:
		~MyForm1()
		{
			if (autoRefreshTimer != nullptr)
			{
				if (autoRefreshTimer->Enabled)
				{
					autoRefreshTimer->Stop();
				}
				delete autoRefreshTimer;
				autoRefreshTimer = nullptr; // إعادة التهيئة إلى nullptr
			}

		}

	private:
		System::Windows::Forms::Panel^ panel1;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Button^ buttonUpdate;
		System::Windows::Forms::Label^ labelSerial;
		System::Windows::Forms::Label^ labelIOSVersion;
		System::Windows::Forms::Button^ button1;
		System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ labelConnectionInfos;
	private: System::Windows::Forms::PictureBox^ pictureBox1;




		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonUpdate = (gcnew System::Windows::Forms::Button());
			this->labelSerial = (gcnew System::Windows::Forms::Label());
			this->labelIOSVersion = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->labelConnectionInfos = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(4, -9);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(957, 56);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::panel1_Paint);
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::panel1_MouseUp);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->button1->Location = System::Drawing::Point(849, 11);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(40, 42);
			this->button1->TabIndex = 0;
			this->button1->Text = L"-";
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(895, 11);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(42, 42);
			this->button2->TabIndex = 1;
			this->button2->Text = L"X";
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Location = System::Drawing::Point(382, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(164, 38);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Innova Tool";
			// 
			// buttonUpdate
			// 
			this->buttonUpdate->BackColor = System::Drawing::Color::Gray;
			this->buttonUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonUpdate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonUpdate->Location = System::Drawing::Point(19, 322);
			this->buttonUpdate->Name = L"buttonUpdate";
			this->buttonUpdate->Size = System::Drawing::Size(236, 57);
			this->buttonUpdate->TabIndex = 1;
			this->buttonUpdate->Text = L"Refresh";
			this->buttonUpdate->UseVisualStyleBackColor = false;
			this->buttonUpdate->Click += gcnew System::EventHandler(this, &MyForm1::buttonUpdate_Click);
			// 
			// labelSerial
			// 
			this->labelSerial->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->labelSerial->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->labelSerial->Location = System::Drawing::Point(12, 84);
			this->labelSerial->Name = L"labelSerial";
			this->labelSerial->Size = System::Drawing::Size(538, 46);
			this->labelSerial->TabIndex = 2;
			this->labelSerial->Text = L"Serial Number: ";
			this->labelSerial->Click += gcnew System::EventHandler(this, &MyForm1::labelSerial_Click);
			// 
			// labelIOSVersion
			// 
			this->labelIOSVersion->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->labelIOSVersion->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->labelIOSVersion->Location = System::Drawing::Point(12, 140);
			this->labelIOSVersion->Name = L"labelIOSVersion";
			this->labelIOSVersion->Size = System::Drawing::Size(475, 49);
			this->labelIOSVersion->TabIndex = 3;
			this->labelIOSVersion->Text = L"iOS Version: ";
			this->labelIOSVersion->Click += gcnew System::EventHandler(this, &MyForm1::labelIOSVersion_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Gray;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(261, 322);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(315, 57);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Scann your Device";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Gray;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(582, 322);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(346, 57);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Repair iDevice";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Gray;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(19, 395);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(236, 57);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Contact";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Gray;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(261, 395);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(315, 57);
			this->button6->TabIndex = 7;
			this->button6->Text = L"Driver Repair!";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Gray;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(582, 395);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(346, 57);
			this->button7->TabIndex = 8;
			this->button7->Text = L"Check iDevice Innova";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label2->Location = System::Drawing::Point(12, 189);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(538, 46);
			this->label2->TabIndex = 9;
			this->label2->Text = L"iDevice :";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label3->Location = System::Drawing::Point(12, 235);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(538, 46);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Check :";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm1::label3_Click);
			// 
			// labelConnectionInfos
			// 
			this->labelConnectionInfos->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelConnectionInfos->AutoSize = true;
			this->labelConnectionInfos->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelConnectionInfos->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->labelConnectionInfos->Location = System::Drawing::Point(242, 281);
			this->labelConnectionInfos->Name = L"labelConnectionInfos";
			this->labelConnectionInfos->Size = System::Drawing::Size(503, 32);
			this->labelConnectionInfos->TabIndex = 11;
			this->labelConnectionInfos->Text = L"Connecte a Device Please And Click Refresh...!";
			this->labelConnectionInfos->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelConnectionInfos->Click += gcnew System::EventHandler(this, &MyForm1::labelConnection_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(771, 101);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(147, 146);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox1_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->ClientSize = System::Drawing::Size(953, 486);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->labelConnectionInfos);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->buttonUpdate);
			this->Controls->Add(this->labelSerial);
			this->Controls->Add(this->labelIOSVersion);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Innova Tool";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load_1);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void OnAutoRefreshTimerTick(System::Object^ sender, System::EventArgs^ e)
		{
			UpdateData();
		}

	private:
		System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e)
		{
			UpdateData();
			autoRefreshTimer = gcnew System::Windows::Forms::Timer();
			autoRefreshTimer->Interval = 1000; // تحديث كل ثانية
			autoRefreshTimer->Tick += gcnew EventHandler(this, &MyForm1::OnAutoRefreshTimerTick);
			autoRefreshTimer->Start();

		}



		System::Void buttonUpdate_Click(System::Object^ sender, System::EventArgs^ e)
		{
			UpdateData();
		}
		private:
			// دالة للحصول على اسم الجهاز 
			String^ GetFullDeviceName()
			{
				try
				{
					// تحديد مسار أداة ideviceinfo
					String^ libimobiledevicePath = "C:\\Users\\lenovo\\Desktop\\Innovatls\\LgninnovaTool\\Libimobiledevice\\";
					String^ ideviceinfoPath = libimobiledevicePath + "ideviceinfo.exe";

					// إعداد العملية لتشغيل ideviceinfo
					Process^ process = gcnew Process();
					process->StartInfo->FileName = "cmd.exe";
					process->StartInfo->Arguments = "/C \"" + ideviceinfoPath + "\" -k ProductType";
					process->StartInfo->RedirectStandardOutput = true;
					process->StartInfo->UseShellExecute = false;
					process->StartInfo->CreateNoWindow = true;

					// قراءة المخرجات
					process->Start();
					String^ productType = process->StandardOutput->ReadToEnd()->Trim();
					process->WaitForExit();

					// قاموس لترجمة أسماء الأجهزة
					System::Collections::Generic::Dictionary<String^, String^>^ deviceNames = gcnew System::Collections::Generic::Dictionary<String^, String^>();
					deviceNames["iPhone8,1"] = "iPhone 6s";
					deviceNames["iPhone8,2"] = "iPhone 6s Plus";
					deviceNames["iPhone8,4"] = "iPhone SE (1stGn)";
					deviceNames["iPhone9,1"] = "iPhone 7";
					deviceNames["iPhone9,2"] = "iPhone 7 Plus";
					deviceNames["iPhone10,1"] = "iPhone 8";
					deviceNames["iPhone10,2"] = "iPhone 8 Plus";
					deviceNames["iPhone10,3"] = "iPhone X";
					deviceNames["iPhone10,6"] = "iPhone X (G)";
					deviceNames["iPhone11,8"] = "iPhone XR";
					deviceNames["iPhone11,2"] = "iPhone XS";
					deviceNames["iPhone11,4"] = "iPhone XS Max";
					deviceNames["iPhone11,6"] = "iPhone XS Max (G)";
					deviceNames["iPhone12,1"] = "iPhone 11";
					deviceNames["iPhone12,3"] = "iPhone 11 Pro";
					deviceNames["iPhone12,5"] = "iPhone 11 Pro Max";
					deviceNames["iPhone13,1"] = "iPhone 12 Mini";
					deviceNames["iPhone13,2"] = "iPhone 12";
					deviceNames["iPhone13,3"] = "iPhone 12 Pro";
					deviceNames["iPhone13,4"] = "iPhone 12 Pro Max";
					deviceNames["iPhone14,4"] = "iPhone 13 Mini";
					deviceNames["iPhone14,5"] = "iPhone 13";
					deviceNames["iPhone14,2"] = "iPhone 13 Pro";
					deviceNames["iPhone14,3"] = "iPhone 13 Pro Max";
					deviceNames["iPhone14,6"] = "iPhone SE (3rd)";
					deviceNames["iPhone15,2"] = "iPhone 14";
					deviceNames["iPhone15,3"] = "iPhone 14 Plus";
					deviceNames["iPhone15,4"] = "iPhone 14 Pro";
					deviceNames["iPhone15,5"] = "iPhone 14 Pro Max";
					deviceNames["iPhone16,1"] = "iPhone 15";
					deviceNames["iPhone16,2"] = "iPhone 15 Plus";
					deviceNames["iPhone16,3"] = "iPhone 15 Pro";
					deviceNames["iPhone16,4"] = "iPhone 15 Pro Max";
					deviceNames["iPhone17,1"] = "iPhone 16";
					deviceNames["iPhone17,2"] = "iPhone 16 Plus";
					deviceNames["iPhone17,3"] = "iPhone 16 Pro";
					deviceNames["iPhone17,4"] = "iPhone 16 Pro Max";

					// يمكنك إضافة المزيد من الأجهزة هنا...;

					// التحقق من الاسم
					if (deviceNames->ContainsKey(productType))
					{
						return deviceNames[productType];
					}
					else if (!String::IsNullOrEmpty(productType))
					{
						return "Unknown Device (" + productType + ")";
					}
					else
					{
						return "Unknown Device";
					}
				}
				catch (Exception^ ex)
				{
					// معالجة الأخطاء أثناء التنفيذ
					MessageBox::Show("Error while getting device name: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return "Unknown Device";
				}
			}


			// دالة لتحديث البيانات
			void UpdateData()
			{
				try
				{
					String^ mode = GetDeviceMode();

					if (mode == "Recovery Mode")
					{
						labelConnectionInfos->Text = "Device is in Recovery Mode. Please exit Recovery Mode.";
						labelSerial->Text = "Serial Number: Unavailable in Recovery Mode";
						labelIOSVersion->Text = "iOS Version: Unavailable in Recovery Mode";
						button4->Text = "Exit Recovery Mode";
						return;
					}
					else if (mode == "DFU Mode")
					{
						labelConnectionInfos->Text = "Device is in DFU Mode. Please exit DFU Mode.";
						labelSerial->Text = "Serial Number: Unavailable in DFU Mode";
						labelIOSVersion->Text = "iOS Version: Unavailable in DFU Mode";
						button4->Text = "Exit DFU Mode";
						return;
					}
					else
					{
						button4->Text = "Repair iDevice";
					}

					labelConnectionInfos->Text = "Connect your device & Click refresh ...!";

					String^ serialOutput = ExecuteCommand("idevicesn.cmd");
					String^ iosOutput = ExecuteCommand("iosVR.cmd");

					labelSerial->Text = "Serial Number: " + serialOutput;
					labelIOSVersion->Text = "iOS Version: " + iosOutput;

					// تحقق من الرقم التسلسلي
					String^ serialNumber = serialOutput->Trim();

					if (String::IsNullOrEmpty(serialNumber))
					{
						label2->Text = "iDevice: Not Found";
						label3->Text = "Check: Not Found";
						return;
					}

					labelConnectionInfos->Text = "iDevice Connected.. :)";

					// الاتصال بقاعدة البيانات
					String^ connectionString = "Data Source=DESKTOP-E5RBU92\\MYB;Initial Catalog=INtool;Integrated Security=True;TrustServerCertificate=True";
					SqlConnection^ connection = gcnew SqlConnection(connectionString);
					connection->Open();

					String^ query = "SELECT DeviceName, Status FROM innovadata WHERE SerialNumber = @SerialNumber";
					SqlCommand^ command = gcnew SqlCommand(query, connection);
					command->Parameters->AddWithValue("@SerialNumber", serialNumber);

					SqlDataReader^ reader = command->ExecuteReader();

					if (reader->Read())
					{
						label2->Text = "iDevice : " + reader["DeviceName"]->ToString();
						label3->Text = "Check : " + reader["Status"]->ToString();
					}
					else
					{
						String^ fullDeviceName = GetFullDeviceName();
						label2->Text = "iDevice : " + fullDeviceName;
						label3->Text = "Check : Supported";
					}

					reader->Close();
					connection->Close();
				}
				catch (Exception^ ex)
				{
					MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}

			String^ GetDeviceMode()
			{
				String^ output = ExecuteCommand("irecovery -q");

				if (output->ToLower()->Contains("recovery"))
					return "Recovery Mode";
				else if (output->ToLower()->Contains("dfu"))
					return "DFU Mode";
				else if (output->Contains("MODE: Recovery"))  // تحقق من سطر "MODE"
					return "Recovery Mode";
				else
					return "Normal Mode";
			}

			// دالة لتنفيذ الأوامر
			String^ ExecuteCommand(String^ cmdFile)
			{
				

				try
				{
					Process^ process = gcnew Process();
					process->StartInfo->FileName = "cmd.exe";
					process->StartInfo->Arguments = "/C " + cmdFile;
					process->StartInfo->RedirectStandardOutput = true;
					process->StartInfo->UseShellExecute = false;
					process->StartInfo->CreateNoWindow = true;
					process->Start();

					String^ output = process->StandardOutput->ReadToEnd();
					process->WaitForExit();
					return output->Trim();
				}
				catch (Exception^ ex)
				{
					MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return "Error";
				}
			}


		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->WindowState = FormWindowState::Minimized;
		}

		System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->Close();
		}
		private: bool IsDeviceConnected()
		{
			try
			{
				// تحقق من وجود أداة ideviceinfo
				String^ ideviceinfoPath = "C:\\Users\\lenovo\\Desktop\\Innovatls\\LgninnovaTool\\Libimobiledevice\\ideviceinfo.exe";

				if (!System::IO::File::Exists(ideviceinfoPath))
				{
					MessageBox::Show("Error: 'ideviceinfo.exe' not found at the specified path.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return false;
				}

				// إعداد العملية لتشغيل ideviceinfo
				Process^ process = gcnew Process();
				process->StartInfo->FileName = "cmd.exe";
				process->StartInfo->Arguments = "/C \"" + ideviceinfoPath + "\" -k ProductName"; // طلب مخرجات للتأكد من الاتصال
				process->StartInfo->RedirectStandardOutput = true;
				process->StartInfo->RedirectStandardError = true; // التقاط الأخطاء أيضًا
				process->StartInfo->UseShellExecute = false;
				process->StartInfo->CreateNoWindow = true;

				// تشغيل العملية
				process->Start();
				String^ output = process->StandardOutput->ReadToEnd()->Trim();
				String^ errorOutput = process->StandardError->ReadToEnd()->Trim();
				process->WaitForExit();

				// تحقق من المخرجات
				if (!String::IsNullOrEmpty(output))
				{
					return true; // الجهاز متصل
				}
				else if (!String::IsNullOrEmpty(errorOutput))
				{
					MessageBox::Show("Error from ideviceinfo: " + errorOutput, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return false;
				}
				else
				{
					return false; // لا يوجد مخرجات، الجهاز غير متصل
				}
			}
			catch (Exception^ ex)
			{
				// عرض رسالة خطأ في حالة حدوث مشكلة
				MessageBox::Show("An error occurred while checking device connection:\n" + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return false;
			}
		}

			   private: bool IsIcloudLocked()
			   {
				   try
				   {
					   String^ ideviceinfoPath = "C:\\Users\\lenovo\\Desktop\\Innovatls\\LgninnovaTool\\Libimobiledevice\\ideviceinfo.exe";

					   Process^ process = gcnew Process();
					   process->StartInfo->FileName = "cmd.exe";
					   process->StartInfo->Arguments = "/C \"" + ideviceinfoPath + "\" -k ActivationState";
					   process->StartInfo->RedirectStandardOutput = true;
					   process->StartInfo->UseShellExecute = false;
					   process->StartInfo->CreateNoWindow = true;
					   process->Start();

					   String^ output = process->StandardOutput->ReadToEnd()->Trim();
					   process->WaitForExit();

					   // التحقق من حالة القفل
					   return output->ToLower()->Contains("locked");
				   }
				   catch (Exception^)
				   {
					   return false;
				   }
			   }

					  private: void ExecuteActivationSteps()
					  {
						  array<String^>^ commands = gcnew array<String^>{
							  "-c \"setenv auto-boot true\"",
							  "-c \"saveenv\"",
							  "-c \"reboot\""
						  };

						  String^ irecoveryPath = "C:\\Users\\lenovo\\Desktop\\Innovatls\\LgninnovaTool\\Libimobiledevice\\irecovery.exe";

						  for each(String ^ cmd in commands)
						  {
							  Process^ process = gcnew Process();
							  process->StartInfo->FileName = "cmd.exe";
							  process->StartInfo->Arguments = "/C \"" + irecoveryPath + "\" " + cmd;
							  process->StartInfo->RedirectStandardOutput = true;
							  process->StartInfo->UseShellExecute = false;
							  process->StartInfo->CreateNoWindow = true;
							  process->Start();

							  process->WaitForExit();
						  }
					  }
							 private: bool IsBatteryReplaced(String^ batterySerial)
							 {
								 try
								 {
									 // استعلام للتحقق من الرقم التسلسلي للبطارية
									 // في حال كنت ترغب باستخدام قاعدة بيانات للبطاريات الأصلية
									 array<String^>^ originalBatterySerials = {
										 "ABC123", // مثال على الأرقام التسلسلية الأصلية
										 "DEF456",
										 "GHI789"
									 };

									 // تحقق مما إذا كان الرقم التسلسلي موجودًا في القائمة الأصلية
									 for each(String ^ originalSerial in originalBatterySerials)
									 {
										 if (batterySerial->Equals(originalSerial))
										 {
											 return false; // البطارية أصلية
										 }
									 }

									 // إذا لم تكن البطارية موجودة في القائمة، فهي مبدلة
									 return true;
								 }
								 catch (Exception^)
								 {
									 return true; // اعتبر البطارية مبدلة إذا لم تتمكن من التحقق
								 }
							 }


	
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			// الحصول على الرقم التسلسلي، اسم الجهاز، ونسخة iOS
			String^ serialNumber = GetSerialNumber();
			String^ deviceName = GetDeviceName();
			String^ iosVersion = labelIOSVersion->Text->Substring(labelIOSVersion->Text->IndexOf(": ") + 2)->Trim();

			// تحقق من القيم
			if (String::IsNullOrEmpty(serialNumber) || String::IsNullOrEmpty(deviceName) || String::IsNullOrEmpty(iosVersion))
			{
				MessageBox::Show("Device details are missing. Please refresh and try again.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// فتح نافذة ScannForm2 وتمرير البيانات
			ScannForm2^ scannForm = gcnew ScannForm2(serialNumber, deviceName, iosVersion);
			scannForm->ShowDialog();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
	}



#pragma endregion

		   // عند الضغط على زر إعادة التشغيل
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		{
			try
			{
				// تحقق مما إذا كانت التسمية تحتوي على الرقم التسلسلي
				if (String::IsNullOrEmpty(labelSerial->Text) || !labelSerial->Text->Contains(": "))
				{
					MessageBox::Show("No device connected or serial number missing. Please refresh and try again.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}

				// استخراج الرقم التسلسلي من النص
				String^ serialNumber = labelSerial->Text->Substring(labelSerial->Text->IndexOf(": ") + 2)->Trim();

				if (String::IsNullOrEmpty(serialNumber))
				{
					MessageBox::Show("Serial number is empty. Please connect a device and try again.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				} 
				// تحقق إذا كان الجهاز متصلًا
				if (!GetDeviceMode())
				{
					MessageBox::Show("No iPhone detected! Please connect a device and try again.", "No Connection", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					return; // إيقاف التنفيذ إذا لم يكن هناك جهاز متصل
				}


				
				if (button4->Text == "Exit Recovery Mode")
				{
					ExecuteCommand("irecovery -c exit");
					MessageBox::Show("Exiting Recovery Mode...", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
					UpdateData();
				}
				else
				{
					MessageBox::Show("Repairing iDevice...", "Repair", MessageBoxButtons::OK, MessageBoxIcon::Information);
					// يمكنك إضافة كود إصلاح الجهاز هنا
				}
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		
		{
			RestartDevice();
		}
		// تنفيذ أمر إعادة التشغيل للجهاز باستخدام idevicediagnostics
		}
	}

		   // دالة لإعادة تشغيل الجهاز
	private: void RestartDevice()
	{
		try
		{
			// تحديد المسار الكامل لأدوات libimobiledevice
			String^ libimobiledevicePath = "C:\\Users\\lenovo\\Desktop\\Innovatls\\LgninnovaTool\\Libimobiledevice\\";
			String^ idevicediagnosticsPath = libimobiledevicePath + "idevicediagnostics.exe"; // تحديد مسار idevicediagnostics.exe

			// إعداد عملية لتشغيل CMD
			Process^ process = gcnew Process();
			process->StartInfo->FileName = "cmd.exe";
			process->StartInfo->Arguments = "/C \"" + idevicediagnosticsPath + "\" restart"; // إضافة مسار idevicediagnostics مع الأمر
			process->StartInfo->RedirectStandardOutput = true; // توجيه المخرجات إلى الذاكرة
			process->StartInfo->UseShellExecute = false; // لا نحتاج إلى استخدام shell
			process->StartInfo->CreateNoWindow = true; // لا نريد فتح نافذة CMD
			process->Start(); // بدء العملية

			process->WaitForExit(); // الانتظار حتى تنتهي العملية
			MessageBox::Show("Device Repaired Successfully\n Please Click Refresh", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Failed to repaire! device: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		// فتح موقع Instagram في المتصفح الافتراضي
		System::Diagnostics::Process::Start("https://www.instagram.com/myb.icloud/");

		// رسالة اختيارية لتأكيد فتح الموقع (يمكنك إزالتها إذا لم تكن ضرورية)
		MessageBox::Show("Instagram has been opened in your default browser Register your Phone :).", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ ex)
	{
		// التعامل مع أي أخطاء أثناء فتح الموقع
		MessageBox::Show("Error while opening Instagram: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
	   



	   System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		
	   }

	
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		// استخراج الرقم التسلسلي من النص (بعد ": ")
		String^ serialNumber = labelSerial->Text->Substring(labelSerial->Text->IndexOf(": ") + 2)->Trim();

		// التحقق من أن الرقم التسلسلي ليس فارغًا
		if (String::IsNullOrEmpty(serialNumber))
		{
			MessageBox::Show("Serial number is empty. Please connect a device and Click Refresh!.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// سلسلة الاتصال بقاعدة البيانات
		String^ connectionString = "Data Source=DESKTOP-E5RBU92\\MYB;Initial Catalog=INtool;Integrated Security=True;TrustServerCertificate=True";

		// إنشاء اتصال بقاعدة البيانات
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		connection->Open();

		// استعلام SQL للتحقق من الرقم التسلسلي
		String^ query = "SELECT DeviceName, Status FROM innovadata WHERE SerialNumber = @SerialNumber";

		// إعداد الأمر
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->AddWithValue("@SerialNumber", serialNumber);

		// تنفيذ الاستعلام وقراءة النتائج
		SqlDataReader^ reader = command->ExecuteReader();

		if (reader->Read())
		{
			// إذا تم العثور على الجهاز في قاعدة البيانات
			String^ deviceName = reader["DeviceName"]->ToString();
			String^ status = reader["Status"]->ToString();

			// التحقق من قفل iCloud باستخدام libimobiledevice
			String^ iCloudStatus = GetICloudLockStatus();

			// تحديث الحقول
			label2->Text = "iDevice : " + deviceName;
			label3->Text = "Check : " + iCloudStatus;

			MessageBox::Show("Device found:\nName: " + deviceName + "\nStatus: " + status + "\nCheck: " + iCloudStatus, "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else
		{
			// إذا لم يتم العثور على الرقم التسلسلي
			// إرسال الرقم التسلسلي إلى موقع الويب
			System::Diagnostics::Process::Start("https://www.innova-service.com/?serial=" + serialNumber);

			// تحديث الحقول
			label2->Text = "iDevice : Unknown";
			label3->Text = "Check : Not Found";

			MessageBox::Show("The device is not found in the database. The serial number has been sent to the website.", "Not Found", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		// إغلاق القارئ والاتصال
		reader->Close();
		connection->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

	   // دالة للتحقق من حالة قفل iCloud باستخدام libimobiledevice
private: String^ GetICloudLockStatus()
{
	try
	{
		// مسار أداة ideviceinfo
		String^ ideviceinfoPath = "C:\\Users\\lenovo\\Desktop\\Innovatls\\LgninnovaTool\\Libimobiledevice\\ideviceinfo.exe";

		// إعداد العملية لتشغيل ideviceinfo
		Process^ process = gcnew Process();
		process->StartInfo->FileName = "cmd.exe";
		process->StartInfo->Arguments = "/C \"" + ideviceinfoPath + "\" -k ActivationState";
		process->StartInfo->RedirectStandardOutput = true;
		process->StartInfo->UseShellExecute = false;
		process->StartInfo->CreateNoWindow = true;

		// قراءة المخرجات
		process->Start();
		String^ output = process->StandardOutput->ReadToEnd()->Trim();
		process->WaitForExit();

		// التحقق من حالة iCloud
		if (output->ToLower()->Contains("locked"))
		{
			return "iCloud Locked";
		}
		else if (output->ToLower()->Contains("unlocked"))
		{
			return "iCloud Unlocked";
		}
		else
		{
			return "Unknown iCloud Status";
		}
	}
	catch (Exception^ ex)
	{
		// التعامل مع أي أخطاء أثناء العملية
		MessageBox::Show("Error while checking iCloud status: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return "Error";
	}
}



private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
	   bool dragging;
	   Point offset;
private: System::Void panel1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//enable dragging and get mouse
	dragging = true;
	offset.X = e->X;
	offset.Y = e->Y;
}
private: System::Void panel1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	// check...
	if (dragging) {
		Point currentScreenPosition = PointToScreen(Point(e->X, e->Y));
		Location = Point(currentScreenPosition.X - offset.X, currentScreenPosition.Y - offset.Y);

	}
}
private: System::Void panel1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//disable dragging;
	dragging = false;

}
private: System::Void labelSerial_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		// التحقق إذا كانت التسمية تحتوي على الرقم التسلسلي
		if (!String::IsNullOrEmpty(labelSerial->Text) && labelSerial->Text->Contains(": "))
		{
			// استخراج الرقم التسلسلي من النص (بعد ": ")
			String^ serialNumber = labelSerial->Text->Substring(labelSerial->Text->IndexOf(": ") + 2)->Trim();

			// نسخ الرقم إلى الحافظة
			Clipboard::SetText(serialNumber);

			// حفظ النص الأصلي
			String^ originalText = labelSerial->Text;

			// تغيير النص إلى "Copied!"
			labelSerial->Text = "Serial Number: Copied! ";

			// إنشاء مؤقت
			System::Windows::Forms::Timer^ timer = gcnew System::Windows::Forms::Timer();
			timer->Interval = 1000; // 1 ثانية

			// إعداد الحدث الخاص بالمؤقت
			timer->Tick += gcnew EventHandler(this, &MyForm1::OnTimerTick);

			// تخزين النص الأصلي في المتغير العام
			this->originalSerialText = originalText;
			this->timerForSerial = timer;

			timer->Start(); // بدء المؤقت

			// رسالة اختيارية لتأكيد النسخ
			MessageBox::Show("Serial number copied to clipboard ...\n Click Refresh & Check iDevice and Contact Admin!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else
		{
			MessageBox::Show("No serial number to copy. Please refresh and try again.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ ex)
	{
		// التعامل مع أي أخطاء أثناء العملية
		MessageBox::Show("Contact Admin 'Moudjib'\nError while copying serial number: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

	   // متغيرات عامة لتخزين النص الأصلي والمؤقت
	   String^ originalSerialText;
	   System::Windows::Forms::Timer^ timerForSerial;

	   // الدالة لمعالجة حدث Tick الخاص بالمؤقت
private: System::Void OnTimerTick(System::Object^ sender, System::EventArgs^ e) {
	timerForSerial->Stop(); // إيقاف المؤقت
	labelSerial->Text = originalSerialText; // إعادة النص الأصلي
}

private: System::Void labelConnection_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm1_Load_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   // دالة للحصول على الرقم التسلسلي
public: String^ GetSerialNumber()
{
	if (!String::IsNullOrEmpty(labelSerial->Text) && labelSerial->Text->Contains(": "))
	{
		return labelSerial->Text->Substring(labelSerial->Text->IndexOf(": ") + 2)->Trim();
	}
	return nullptr; // إذا لم يتم العثور على الرقم التسلسلي
}

	  // دالة للحصول على اسم الجهاز
public: String^ GetDeviceName()
{
	if (!String::IsNullOrEmpty(label2->Text) && label2->Text->Contains(": "))
	{
		return label2->Text->Substring(label2->Text->IndexOf(": ") + 2)->Trim();
	}
	return nullptr; // إذا لم يتم العثور على اسم الجهاز
}


private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void labelIOSVersion_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}





