#pragma once
#include <msclr/marshal_cppstd.h>
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <Windows.h>
namespace LgninnovaTool {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::Data::SqlClient;
	using namespace System::Text::RegularExpressions;

	/// <summary>
	/// Description résumée de ScannForm2
	/// </summary>
	public ref class ScannForm2 : public System::Windows::Forms::Form
	{
	public:
		// مُنشئ لاستقبال الرقم التسلسلي، اسم الجهاز، ونسخة iOS
		ScannForm2(String^ serialNumber, String^ deviceName, String^ iosVersion)
		{
			InitializeComponent();

			// عرض البيانات في الحقول
			this->labelSerialNumberَ->Text = "Serial Number: " + serialNumber;
			this->labelDeviceNameً->Text =  deviceName;
			this->labelIosVersion->Text = "iOS Version: " + iosVersion; // عرض نسخة iOS
				}


	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~ScannForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ iPhoneframePcBox;
	private: System::Windows::Forms::Button^ ClosebuttonSC;
	private: System::Windows::Forms::Button^ CopybuttonSC;
	private: System::Windows::Forms::Label^ labelSerialNumberَ;
	private: System::Windows::Forms::Label^ labelIosVersion;





	private: System::Windows::Forms::Label^ labelDeviceNameً;
	private: System::Windows::Forms::Label^ labelIdeviceMode;
	private: System::Windows::Forms::Label^ labelBattery;











	private: System::Windows::Forms::Label^ labelChargeTime;
	private: System::Windows::Forms::Label^ labelCPU;





	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ labelInnovaServer;



	protected:

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ScannForm2::typeid));
			this->iPhoneframePcBox = (gcnew System::Windows::Forms::PictureBox());
			this->ClosebuttonSC = (gcnew System::Windows::Forms::Button());
			this->CopybuttonSC = (gcnew System::Windows::Forms::Button());
			this->labelSerialNumberَ = (gcnew System::Windows::Forms::Label());
			this->labelIosVersion = (gcnew System::Windows::Forms::Label());
			this->labelDeviceNameً = (gcnew System::Windows::Forms::Label());
			this->labelIdeviceMode = (gcnew System::Windows::Forms::Label());
			this->labelBattery = (gcnew System::Windows::Forms::Label());
			this->labelChargeTime = (gcnew System::Windows::Forms::Label());
			this->labelCPU = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->labelInnovaServer = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iPhoneframePcBox))->BeginInit();
			this->SuspendLayout();
			// 
			// iPhoneframePcBox
			// 
			this->iPhoneframePcBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"iPhoneframePcBox.Image")));
			this->iPhoneframePcBox->Location = System::Drawing::Point(12, 65);
			this->iPhoneframePcBox->Name = L"iPhoneframePcBox";
			this->iPhoneframePcBox->Size = System::Drawing::Size(251, 499);
			this->iPhoneframePcBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->iPhoneframePcBox->TabIndex = 0;
			this->iPhoneframePcBox->TabStop = false;
			// 
			// ClosebuttonSC
			// 
			this->ClosebuttonSC->BackColor = System::Drawing::Color::Black;
			this->ClosebuttonSC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ClosebuttonSC->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClosebuttonSC->Location = System::Drawing::Point(620, 617);
			this->ClosebuttonSC->Name = L"ClosebuttonSC";
			this->ClosebuttonSC->Size = System::Drawing::Size(158, 56);
			this->ClosebuttonSC->TabIndex = 1;
			this->ClosebuttonSC->Text = L"Close";
			this->ClosebuttonSC->UseVisualStyleBackColor = false;
			this->ClosebuttonSC->Click += gcnew System::EventHandler(this, &ScannForm2::ClosebuttonSC_Click);
			// 
			// CopybuttonSC
			// 
			this->CopybuttonSC->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->CopybuttonSC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CopybuttonSC->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->CopybuttonSC->Location = System::Drawing::Point(341, 617);
			this->CopybuttonSC->Name = L"CopybuttonSC";
			this->CopybuttonSC->Size = System::Drawing::Size(273, 56);
			this->CopybuttonSC->TabIndex = 2;
			this->CopybuttonSC->Text = L"Copy iDevice";
			this->CopybuttonSC->UseVisualStyleBackColor = false;
			// 
			// labelSerialNumberَ
			// 
			this->labelSerialNumberَ->AutoSize = true;
			this->labelSerialNumberَ->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->labelSerialNumberَ->Location = System::Drawing::Point(292, 43);
			this->labelSerialNumberَ->Name = L"labelSerialNumberَ";
			this->labelSerialNumberَ->Size = System::Drawing::Size(194, 36);
			this->labelSerialNumberَ->TabIndex = 4;
			this->labelSerialNumberَ->Text = L"Serial number : ";
			// 
			// labelIosVersion
			// 
			this->labelIosVersion->AutoSize = true;
			this->labelIosVersion->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->labelIosVersion->Location = System::Drawing::Point(292, 95);
			this->labelIosVersion->Name = L"labelIosVersion";
			this->labelIosVersion->Size = System::Drawing::Size(76, 36);
			this->labelIosVersion->TabIndex = 5;
			this->labelIosVersion->Text = L"IOS : ";
			this->labelIosVersion->Click += gcnew System::EventHandler(this, &ScannForm2::label1_Click_1);
			// 
			// labelDeviceNameً
			// 
			this->labelDeviceNameً->AutoSize = true;
			this->labelDeviceNameً->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->labelDeviceNameً->Location = System::Drawing::Point(43, 19);
			this->labelDeviceNameً->Name = L"labelDeviceNameً";
			this->labelDeviceNameً->Size = System::Drawing::Size(192, 41);
			this->labelDeviceNameً->TabIndex = 6;
			this->labelDeviceNameً->Text = L"idevice name";
			this->labelDeviceNameً->Click += gcnew System::EventHandler(this, &ScannForm2::label3_Click);
			// 
			// labelIdeviceMode
			// 
			this->labelIdeviceMode->AutoSize = true;
			this->labelIdeviceMode->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->labelIdeviceMode->Location = System::Drawing::Point(292, 147);
			this->labelIdeviceMode->Name = L"labelIdeviceMode";
			this->labelIdeviceMode->Size = System::Drawing::Size(191, 36);
			this->labelIdeviceMode->TabIndex = 7;
			this->labelIdeviceMode->Text = L"iDevice Mode : ";
			this->labelIdeviceMode->Click += gcnew System::EventHandler(this, &ScannForm2::labelIdeviceMode_Click);
			// 
			// labelBattery
			// 
			this->labelBattery->AutoSize = true;
			this->labelBattery->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->labelBattery->Location = System::Drawing::Point(292, 211);
			this->labelBattery->Name = L"labelBattery";
			this->labelBattery->Size = System::Drawing::Size(165, 36);
			this->labelBattery->TabIndex = 9;
			this->labelBattery->Text = L"Battery \"%\" : ";
			this->labelBattery->Click += gcnew System::EventHandler(this, &ScannForm2::labelBatterieLife_Click);
			// 
			// labelChargeTime
			// 
			this->labelChargeTime->AutoSize = true;
			this->labelChargeTime->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->labelChargeTime->Location = System::Drawing::Point(292, 274);
			this->labelChargeTime->Name = L"labelChargeTime";
			this->labelChargeTime->Size = System::Drawing::Size(180, 36);
			this->labelChargeTime->TabIndex = 11;
			this->labelChargeTime->Text = L"Charge Time : ";
			// 
			// labelCPU
			// 
			this->labelCPU->AutoSize = true;
			this->labelCPU->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->labelCPU->Location = System::Drawing::Point(292, 344);
			this->labelCPU->Name = L"labelCPU";
			this->labelCPU->Size = System::Drawing::Size(84, 36);
			this->labelCPU->TabIndex = 12;
			this->labelCPU->Text = L"CPU : ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->label10->Location = System::Drawing::Point(292, 483);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(225, 36);
			this->label10->TabIndex = 13;
			this->label10->Text = L"Check All in One : ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->label11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label11->Location = System::Drawing::Point(12, 581);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(234, 36);
			this->label11->TabIndex = 14;
			this->label11->Text = L"By Belkaid Moudjib";
			this->label11->Click += gcnew System::EventHandler(this, &ScannForm2::label11_Click);
			// 
			// labelInnovaServer
			// 
			this->labelInnovaServer->AutoSize = true;
			this->labelInnovaServer->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->labelInnovaServer->Location = System::Drawing::Point(292, 531);
			this->labelInnovaServer->Name = L"labelInnovaServer";
			this->labelInnovaServer->Size = System::Drawing::Size(191, 36);
			this->labelInnovaServer->TabIndex = 15;
			this->labelInnovaServer->Text = L"Innova Server : ";
			// 
			// ScannForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(15, 38);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GrayText;
			this->ClientSize = System::Drawing::Size(787, 684);
			this->Controls->Add(this->labelInnovaServer);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->labelCPU);
			this->Controls->Add(this->labelChargeTime);
			this->Controls->Add(this->labelBattery);
			this->Controls->Add(this->labelIdeviceMode);
			this->Controls->Add(this->labelDeviceNameً);
			this->Controls->Add(this->labelIosVersion);
			this->Controls->Add(this->labelSerialNumberَ);
			this->Controls->Add(this->CopybuttonSC);
			this->Controls->Add(this->ClosebuttonSC);
			this->Controls->Add(this->iPhoneframePcBox);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->Name = L"ScannForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ScannForm2";
			this->Load += gcnew System::EventHandler(this, &ScannForm2::ScannForm2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iPhoneframePcBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		

#pragma endregion
		private: String^ GetDeviceMode()
		{
			try
			{
				// تحديد مسار أداة ideviceinfo
				String^ ideviceinfoPath = "C:\\Users\\lenovo\\Desktop\\Innovatls\\LgninnovaTool\\Libimobiledevice\\ideviceinfo.exe";

				// إعداد العملية لتشغيل ideviceinfo
				Process^ process = gcnew Process();
				process->StartInfo->FileName = "cmd.exe";
				process->StartInfo->Arguments = "/C \"" + ideviceinfoPath + "\" -k ActivationState"; // استعلام ActivationState
				process->StartInfo->RedirectStandardOutput = true;
				process->StartInfo->UseShellExecute = false;
				process->StartInfo->CreateNoWindow = true;

				// قراءة المخرجات
				process->Start();
				String^ output = process->StandardOutput->ReadToEnd()->Trim();
				process->WaitForExit();

				// تحليل المخرجات لتحديد وضع الهاتف
				if (output->ToLower()->Contains("unactivated"))
				{
					return "Hello Mode";
				}
				else if (output->ToLower()->Contains("activated"))
				{
					return "Normal Mode";
				}
				else if (output->ToLower()->Contains("recovery"))
				{
					return "Recovery Mode";
				}
				else
				{
					return "Unknown Mode";
				}
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error while checking device mode: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return "Error";
			}
		}

private: System::Void UpdateDeviceMode()
{
	try
	{
		// استدعاء الدالة للحصول على وضع الجهاز
		String^ deviceMode = GetDeviceMode();

		// تحديث Label في الواجهة
		labelIdeviceMode->Text = "iDevice Mode: " + deviceMode;
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Error while updating device mode: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

	   
//private: System::Void getCycleCount()
//{
	//->Text = getCycleCount();
//}


		//			  private: System::Void labelIcloudStatus_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
						  // اجعل كلمة "HERE" باللون الأزرق عند تمرير الماوس
						  //this->labelIcloudStatus->ForeColor = System::Drawing::Color::Blue;
					  //}

                      //private: System::Void labelIcloudStatus_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
						  // اجعل النص يعود إلى اللون الرمادي
						//	  this->labelIcloudStatus->ForeColor = System::Drawing::Color::Gray;
					  //}
					  //private: System::Void labelIcloudStatus_Click(System::Object^ sender, System::EventArgs^ e) {
						//  try
						  //{
							  // فتح الموقع في المتصفح الافتراضي
							//  System::Diagnostics::Process::Start("https://www.innova-service.com");

							  // رسالة اختيارية لتأكيد فتح الموقع
							  //MessageBox::Show("Redirecting to iCloud Status page... & Contacte Support Server", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
						  //}
						  //catch (Exception^ ex)
						  //{
							  // عرض رسالة خطأ إذا فشل فتح الموقع
							//  MessageBox::Show("Failed to open the link. Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						  //}
					  //}

	   

	   

	
	   

							
				
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
						
							 private: String^ GetDeviceCPU(String^ productType)
							 {
								 System::Collections::Generic::Dictionary<String^, String^>^ cpuInfo = gcnew System::Collections::Generic::Dictionary<String^, String^>();

								 // iPhone 6 Series (A8)
								 cpuInfo["iPhone7,2"] = "A8";
								 cpuInfo["iPhone7,1"] = "A8";

								 // iPhone 6s Series (A9)
								 cpuInfo["iPhone8,1"] = "A9";
								 cpuInfo["iPhone8,2"] = "A9";

								 // iPhone SE (1st Gen) (A9)
								 cpuInfo["iPhone8,4"] = "A9";

								 // iPhone 7 Series (A10 Fusion)
								 cpuInfo["iPhone9,1"] = "A10 Fusion";
								 cpuInfo["iPhone9,3"] = "A10 Fusion";
								 cpuInfo["iPhone9,2"] = "A10 Fusion";
								 cpuInfo["iPhone9,4"] = "A10 Fusion";

								 // iPhone 8 Series (A11 Bionic)
								 cpuInfo["iPhone10,1"] = "A11 Bionic";
								 cpuInfo["iPhone10,4"] = "A11 Bionic";
								 cpuInfo["iPhone10,2"] = "A11 Bionic";
								 cpuInfo["iPhone10,5"] = "A11 Bionic";

								 // iPhone X (A11 Bionic)
								 cpuInfo["iPhone10,3"] = "A11 Bionic";
								 cpuInfo["iPhone10,6"] = "A11 Bionic";

								 // iPhone XS Series (A12 Bionic)
								 cpuInfo["iPhone11,2"] = "A12 Bionic";
								 cpuInfo["iPhone11,4"] = "A12 Bionic";
								 cpuInfo["iPhone11,6"] = "A12 Bionic";

								 // iPhone XR (A12 Bionic)
								 cpuInfo["iPhone11,8"] = "A12 Bionic";

								 // iPhone 11 Series (A13 Bionic)
								 cpuInfo["iPhone12,1"] = "A13 Bionic";
								 cpuInfo["iPhone12,3"] = "A13 Bionic";
								 cpuInfo["iPhone12,5"] = "A13 Bionic";

								 // iPhone SE (2nd Gen) (A13 Bionic)
								 cpuInfo["iPhone12,8"] = "A13 Bionic";

								 // iPhone 12 Series (A14 Bionic)
								 cpuInfo["iPhone13,1"] = "A14 Bionic";
								 cpuInfo["iPhone13,2"] = "A14 Bionic";
								 cpuInfo["iPhone13,3"] = "A14 Bionic";
								 cpuInfo["iPhone13,4"] = "A14 Bionic";

								 // iPhone 13 Series (A15 Bionic)
								 cpuInfo["iPhone14,4"] = "A15 Bionic";
								 cpuInfo["iPhone14,5"] = "A15 Bionic";
								 cpuInfo["iPhone14,2"] = "A15 Bionic";
								 cpuInfo["iPhone14,3"] = "A15 Bionic";

								 // iPhone SE (3rd Gen) (A15 Bionic)
								 cpuInfo["iPhone14,6"] = "A15 Bionic";

								 // iPhone 14 Series (A16 Bionic)
								 cpuInfo["iPhone15,2"] = "A16 Bionic";
								 cpuInfo["iPhone15,3"] = "A16 Bionic";
								 cpuInfo["iPhone15,4"] = "A16 Bionic";
								 cpuInfo["iPhone15,5"] = "A16 Bionic";

								 // iPhone 15 Series (A17 Pro)
								 cpuInfo["iPhone16,1"] = "A17 Pro";
								 cpuInfo["iPhone16,2"] = "A17 Pro";
								 cpuInfo["iPhone16,3"] = "A17 Pro";
								 cpuInfo["iPhone16,4"] = "A17 Pro";

								 // iPhone 16 Series (تقديري) (A18 Pro)
								 cpuInfo["iPhone17,1"] = "A18 Pro";
								 cpuInfo["iPhone17,2"] = "A18 Pro";
								 cpuInfo["iPhone17,3"] = "A18 Pro";
								 cpuInfo["iPhone17,4"] = "A18 Pro";


								 if (cpuInfo->ContainsKey(productType))
								 {
									 return cpuInfo[productType];
								 }

								 return "Unknown CPU"; // إذا لم يكن الجهاز موجودًا في القاموس
							 }


									private: System::Void UpdateDeviceName()
									{
										try
										{
											// استخراج اسم الجهاز من libimobiledevice
											String^ productType = GetFullDeviceName();

											// تحويل النوع إلى اسم الجهاز
											String^ deviceName = (productType);

											// عرض اسم الجهاز
											labelDeviceNameً->Text = deviceName;

											// تحديث المعالج بناءً على اسم الجهاز
											String^ cpuInfo = GetDeviceCPU(productType);
											labelCPU->Text = "CPU: " + cpuInfo;
										}
										catch (Exception^ ex)
										{
											MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
											labelDeviceNameً->Text = "Error";
											labelCPU->Text = "Error";
										}
									}
										   
										   System::Void GetndDisplayCycleCount() {
											   try {
												   String^ libimobiledevicePath = "C:\\Users\\lenovo\\Desktop\\Innovatls\\LgninnovaTool\\Libimobiledevice\\";
												   String^ idevicediagnosticsPath = libimobiledevicePath + "idevicediagnostics.exe";

												   ProcessStartInfo^ startInfo = gcnew ProcessStartInfo();
												   startInfo->FileName = idevicediagnosticsPath;
												   startInfo->Arguments = "diagnostics GasGauge";
												   startInfo->RedirectStandardOutput = true;
												   startInfo->RedirectStandardError = true;
												   startInfo->UseShellExecute = false;
												   startInfo->CreateNoWindow = true;

												   Process^ process = Process::Start(startInfo);
												   String^ output = process->StandardOutput->ReadToEnd();
												   String^ errorOutput = process->StandardError->ReadToEnd();
												   process->WaitForExit();

												   System::IO::File::WriteAllText("C:\\Users\\lenovo\\Desktop\\log.txt", "Output:\n" + output + "\nErrors:\n" + errorOutput);

												   MessageBox::Show(output, "Debug Output");  // عرض المخرجات
											   }
											   catch (Exception^ ex) {
												   System::IO::File::WriteAllText("C:\\Users\\lenovo\\Desktop\\log.txt", "Exception:\n" + ex->Message);
												   MessageBox::Show("Error: " + ex->Message);
											   }
										   }


										   System::Void GetAndDisplayCycleCount() {
											   try {
												   String^ libimobiledevicePath = "C:\\Users\\lenovo\\Desktop\\Innovatls\\LgninnovaTool\\Libimobiledevice\\";
												   String^ idevicediagnosticsPath = libimobiledevicePath + "idevicediagnostics.exe";

												   Process^ process = gcnew Process();
												   process->StartInfo->FileName = "cmd.exe";
												   process->StartInfo->Arguments = "/C \"" + idevicediagnosticsPath + "\" diagnostics GasGauge";
												   process->StartInfo->RedirectStandardOutput = true;
												   process->StartInfo->UseShellExecute = false;
												   process->StartInfo->CreateNoWindow = true;

												   process->Start();
												   String^ output = process->StandardOutput->ReadToEnd();
												   process->WaitForExit();

												   MessageBox::Show(output, "Debug Output");  // عرض المخرجات

												   Regex^ cycleCountRegex = gcnew Regex("<key>CycleCount</key>\\s*<integer>(\\d+)</integer>");
												   Match^ cycleCountMatch = cycleCountRegex->Match(output);

												   if (cycleCountMatch->Success) {
													   String^ cycleCount = cycleCountMatch->Groups[1]->Value;
													   MessageBox::Show("Cycle Count: " + cycleCount);  // طباعة تصحيحية
													   labelChargeTime->Text = "Charge Time: " + cycleCount + " Cycles";
												   }
												   else {
													   labelChargeTime->Text = "Charge Time: Error retrieving data";
												   }
											   }
											   catch (Exception^ ex) {
												   labelChargeTime->Text = "Charge Time: " + ex->Message;
												  
											   }

										   }

									
										   private: System::Void labelDeviceNameً_TextChanged(System::Object^ sender, System::EventArgs^ e)
										   {
											   UpdateDeviceName();
										   }


	

		
	private: System::Void ScannForm2_Load(System::Object^ sender, System::EventArgs^ e) {
		
		// قراءة النص من labelSerialNumberَ
		String^ serialNumber = labelSerialNumberَ->Text->Trim();

		if (!String::IsNullOrEmpty(serialNumber)) {
			// إذا كان الرقم التسلسلي موجودًا
			labelInnovaServer->Text = "Innova Server: Registered";
			labelInnovaServer->ForeColor = System::Drawing::Color::Black; // لون النص الأساسي
			labelInnovaServer->UseMnemonic = false; // لتجنب مشاكل في النص
		}
		else {
			// إذا كان الرقم التسلسلي فارغًا
			labelInnovaServer->Text = "Innova Server: ERROR!";
			labelInnovaServer->ForeColor = System::Drawing::Color::Black; // لون النص الأساسي
		}

		UpdateDeviceMode();
		UpdateDeviceName();
		


	}
	private: System::Void ClosebuttonSC_Click(System::Object^ sender, System::EventArgs^ e) {
	
		this->Close();
	}

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void labelIdeviceMode_Click(System::Object^ sender, System::EventArgs^ e) {

}
	 

private: System::Void labelBatterieLife_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
