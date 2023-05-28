#pragma once
#include <cmath>
namespace zad3 {

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

	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ CE;
	private: System::Windows::Forms::Button^ btn_C;


	private: System::Windows::Forms::Button^ btn_percent;

	private: System::Windows::Forms::Button^ btn_usun;
	private: System::Windows::Forms::Button^ btn_dot;




	private: System::Windows::Forms::Button^ btn_minus_plus;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;




	public:

	public:

	public:

		char operation;
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
	private: System::Windows::Forms::Label^ result_label;
	protected:

	private: System::Windows::Forms::Button^ b1;
	private: System::Windows::Forms::Button^ b2;
	private: System::Windows::Forms::Button^ b3;
	private: System::Windows::Forms::Button^ btn_minus;
	private: System::Windows::Forms::Button^ btn_plus;


	private: System::Windows::Forms::Button^ b7;
	private: System::Windows::Forms::Button^ b6;
	private: System::Windows::Forms::Button^ b5;
	private: System::Windows::Forms::Button^ b12;

	private: System::Windows::Forms::Button^ b11;
	private: System::Windows::Forms::Button^ b10;
	private: System::Windows::Forms::Button^ b9;
	private: System::Windows::Forms::Button^ btn_1x;

	private: System::Windows::Forms::Button^ btn_divide;
	private: System::Windows::Forms::Button^ btn_mult;
	private: System::Windows::Forms::Button^ btn_equal;
	private:int first_num;
	private:char user_operation = ' ';
	private:bool is_equal = false;
	private:float result;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->result_label = (gcnew System::Windows::Forms::Label());
			this->b1 = (gcnew System::Windows::Forms::Button());
			this->b2 = (gcnew System::Windows::Forms::Button());
			this->b3 = (gcnew System::Windows::Forms::Button());
			this->btn_minus = (gcnew System::Windows::Forms::Button());
			this->btn_plus = (gcnew System::Windows::Forms::Button());
			this->b7 = (gcnew System::Windows::Forms::Button());
			this->b6 = (gcnew System::Windows::Forms::Button());
			this->b5 = (gcnew System::Windows::Forms::Button());
			this->b12 = (gcnew System::Windows::Forms::Button());
			this->b11 = (gcnew System::Windows::Forms::Button());
			this->b10 = (gcnew System::Windows::Forms::Button());
			this->b9 = (gcnew System::Windows::Forms::Button());
			this->btn_1x = (gcnew System::Windows::Forms::Button());
			this->btn_divide = (gcnew System::Windows::Forms::Button());
			this->btn_mult = (gcnew System::Windows::Forms::Button());
			this->btn_equal = (gcnew System::Windows::Forms::Button());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->CE = (gcnew System::Windows::Forms::Button());
			this->btn_C = (gcnew System::Windows::Forms::Button());
			this->btn_percent = (gcnew System::Windows::Forms::Button());
			this->btn_usun = (gcnew System::Windows::Forms::Button());
			this->btn_dot = (gcnew System::Windows::Forms::Button());
			this->btn_minus_plus = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// result_label
			// 
			this->result_label->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->result_label->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->result_label->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->result_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->result_label->ForeColor = System::Drawing::Color::White;
			this->result_label->Location = System::Drawing::Point(6, 12);
			this->result_label->Name = L"result_label";
			this->result_label->Size = System::Drawing::Size(386, 90);
			this->result_label->TabIndex = 0;
			this->result_label->Text = L"0";
			this->result_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->result_label->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// b1
			// 
			this->b1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(92)), static_cast<System::Int32>(static_cast<System::Byte>(91)),
				static_cast<System::Int32>(static_cast<System::Byte>(91)));
			this->b1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->b1->ForeColor = System::Drawing::Color::White;
			this->b1->Location = System::Drawing::Point(3, 438);
			this->b1->Name = L"b1";
			this->b1->Size = System::Drawing::Size(92, 54);
			this->b1->TabIndex = 1;
			this->b1->Text = L"1";
			this->b1->UseVisualStyleBackColor = false;
			this->b1->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click_1);
			// 
			// b2
			// 
			this->b2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(92)), static_cast<System::Int32>(static_cast<System::Byte>(91)),
				static_cast<System::Int32>(static_cast<System::Byte>(91)));
			this->b2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->b2->ForeColor = System::Drawing::Color::White;
			this->b2->Location = System::Drawing::Point(101, 438);
			this->b2->Name = L"b2";
			this->b2->Size = System::Drawing::Size(92, 54);
			this->b2->TabIndex = 2;
			this->b2->Text = L"2";
			this->b2->UseVisualStyleBackColor = false;
			this->b2->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click_1);
			// 
			// b3
			// 
			this->b3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(92)), static_cast<System::Int32>(static_cast<System::Byte>(91)),
				static_cast<System::Int32>(static_cast<System::Byte>(91)));
			this->b3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->b3->ForeColor = System::Drawing::Color::White;
			this->b3->Location = System::Drawing::Point(199, 438);
			this->b3->Name = L"b3";
			this->b3->Size = System::Drawing::Size(92, 54);
			this->b3->TabIndex = 3;
			this->b3->Text = L"3";
			this->b3->UseVisualStyleBackColor = false;
			this->b3->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click_1);
			// 
			// btn_minus
			// 
			this->btn_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->btn_minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_minus->ForeColor = System::Drawing::Color::White;
			this->btn_minus->Location = System::Drawing::Point(297, 378);
			this->btn_minus->Name = L"btn_minus";
			this->btn_minus->Size = System::Drawing::Size(92, 54);
			this->btn_minus->TabIndex = 4;
			this->btn_minus->Text = L"-";
			this->btn_minus->UseVisualStyleBackColor = false;
			this->btn_minus->Click += gcnew System::EventHandler(this, &MyForm::btn_minus_Click);
			// 
			// btn_plus
			// 
			this->btn_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->btn_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_plus->ForeColor = System::Drawing::Color::White;
			this->btn_plus->Location = System::Drawing::Point(297, 438);
			this->btn_plus->Name = L"btn_plus";
			this->btn_plus->Size = System::Drawing::Size(92, 54);
			this->btn_plus->TabIndex = 8;
			this->btn_plus->Text = L"+";
			this->btn_plus->UseVisualStyleBackColor = false;
			this->btn_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_plus_Click);
			// 
			// b7
			// 
			this->b7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(92)), static_cast<System::Int32>(static_cast<System::Byte>(91)),
				static_cast<System::Int32>(static_cast<System::Byte>(91)));
			this->b7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->b7->ForeColor = System::Drawing::Color::White;
			this->b7->Location = System::Drawing::Point(199, 378);
			this->b7->Name = L"b7";
			this->b7->Size = System::Drawing::Size(92, 54);
			this->b7->TabIndex = 7;
			this->b7->Text = L"6";
			this->b7->UseVisualStyleBackColor = false;
			this->b7->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click_1);
			// 
			// b6
			// 
			this->b6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(92)), static_cast<System::Int32>(static_cast<System::Byte>(91)),
				static_cast<System::Int32>(static_cast<System::Byte>(91)));
			this->b6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->b6->ForeColor = System::Drawing::Color::White;
			this->b6->Location = System::Drawing::Point(101, 378);
			this->b6->Name = L"b6";
			this->b6->Size = System::Drawing::Size(92, 54);
			this->b6->TabIndex = 6;
			this->b6->Text = L"5";
			this->b6->UseVisualStyleBackColor = false;
			this->b6->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click_1);
			// 
			// b5
			// 
			this->b5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(92)), static_cast<System::Int32>(static_cast<System::Byte>(91)),
				static_cast<System::Int32>(static_cast<System::Byte>(91)));
			this->b5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->b5->ForeColor = System::Drawing::Color::White;
			this->b5->Location = System::Drawing::Point(3, 378);
			this->b5->Name = L"b5";
			this->b5->Size = System::Drawing::Size(92, 54);
			this->b5->TabIndex = 5;
			this->b5->Text = L"4";
			this->b5->UseVisualStyleBackColor = false;
			this->b5->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click_1);
			// 
			// b12
			// 
			this->b12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(92)), static_cast<System::Int32>(static_cast<System::Byte>(91)),
				static_cast<System::Int32>(static_cast<System::Byte>(91)));
			this->b12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->b12->ForeColor = System::Drawing::Color::White;
			this->b12->Location = System::Drawing::Point(101, 497);
			this->b12->Name = L"b12";
			this->b12->Size = System::Drawing::Size(92, 54);
			this->b12->TabIndex = 12;
			this->b12->Text = L"0";
			this->b12->UseVisualStyleBackColor = false;
			this->b12->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click_1);
			// 
			// b11
			// 
			this->b11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(92)), static_cast<System::Int32>(static_cast<System::Byte>(91)),
				static_cast<System::Int32>(static_cast<System::Byte>(91)));
			this->b11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->b11->ForeColor = System::Drawing::Color::White;
			this->b11->Location = System::Drawing::Point(199, 318);
			this->b11->Name = L"b11";
			this->b11->Size = System::Drawing::Size(92, 54);
			this->b11->TabIndex = 11;
			this->b11->Text = L"9";
			this->b11->UseVisualStyleBackColor = false;
			this->b11->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click_1);
			// 
			// b10
			// 
			this->b10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(92)), static_cast<System::Int32>(static_cast<System::Byte>(91)),
				static_cast<System::Int32>(static_cast<System::Byte>(91)));
			this->b10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->b10->ForeColor = System::Drawing::Color::White;
			this->b10->Location = System::Drawing::Point(101, 318);
			this->b10->Name = L"b10";
			this->b10->Size = System::Drawing::Size(92, 54);
			this->b10->TabIndex = 10;
			this->b10->Text = L"8";
			this->b10->UseVisualStyleBackColor = false;
			this->b10->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click_1);
			// 
			// b9
			// 
			this->b9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(92)), static_cast<System::Int32>(static_cast<System::Byte>(91)),
				static_cast<System::Int32>(static_cast<System::Byte>(91)));
			this->b9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->b9->ForeColor = System::Drawing::Color::White;
			this->b9->Location = System::Drawing::Point(3, 318);
			this->b9->Name = L"b9";
			this->b9->Size = System::Drawing::Size(92, 54);
			this->b9->TabIndex = 9;
			this->b9->Text = L"7";
			this->b9->UseVisualStyleBackColor = false;
			this->b9->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click_1);
			// 
			// btn_1x
			// 
			this->btn_1x->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->btn_1x->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_1x->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_1x->ForeColor = System::Drawing::Color::White;
			this->btn_1x->Location = System::Drawing::Point(3, 260);
			this->btn_1x->Name = L"btn_1x";
			this->btn_1x->Size = System::Drawing::Size(92, 54);
			this->btn_1x->TabIndex = 15;
			this->btn_1x->Text = L"1/x";
			this->btn_1x->UseVisualStyleBackColor = false;
			this->btn_1x->Click += gcnew System::EventHandler(this, &MyForm::btn_1x_Click);
			// 
			// btn_divide
			// 
			this->btn_divide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->btn_divide->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_divide->ForeColor = System::Drawing::Color::White;
			this->btn_divide->Location = System::Drawing::Point(297, 258);
			this->btn_divide->Name = L"btn_divide";
			this->btn_divide->Size = System::Drawing::Size(92, 54);
			this->btn_divide->TabIndex = 14;
			this->btn_divide->Text = L"÷";
			this->btn_divide->UseVisualStyleBackColor = false;
			this->btn_divide->Click += gcnew System::EventHandler(this, &MyForm::btn_divide_Click);
			// 
			// btn_mult
			// 
			this->btn_mult->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->btn_mult->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_mult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_mult->ForeColor = System::Drawing::Color::White;
			this->btn_mult->Location = System::Drawing::Point(297, 318);
			this->btn_mult->Name = L"btn_mult";
			this->btn_mult->Size = System::Drawing::Size(92, 54);
			this->btn_mult->TabIndex = 13;
			this->btn_mult->Text = L"x";
			this->btn_mult->UseVisualStyleBackColor = false;
			this->btn_mult->Click += gcnew System::EventHandler(this, &MyForm::btn_mult_Click);
			// 
			// btn_equal
			// 
			this->btn_equal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->btn_equal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_equal->ForeColor = System::Drawing::Color::White;
			this->btn_equal->Location = System::Drawing::Point(297, 498);
			this->btn_equal->Name = L"btn_equal";
			this->btn_equal->Size = System::Drawing::Size(92, 53);
			this->btn_equal->TabIndex = 16;
			this->btn_equal->Text = L"=";
			this->btn_equal->UseVisualStyleBackColor = false;
			this->btn_equal->Click += gcnew System::EventHandler(this, &MyForm::btn_equal_Click);
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_exit->ForeColor = System::Drawing::Color::White;
			this->button_exit->Location = System::Drawing::Point(6, 12);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(29, 27);
			this->button_exit->TabIndex = 20;
			this->button_exit->Text = L"X";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &MyForm::button_exit_Click_1);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(199, 260);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 54);
			this->button1->TabIndex = 21;
			this->button1->Text = L"√(&x)";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(101, 260);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 54);
			this->button2->TabIndex = 22;
			this->button2->Text = L"x^2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// CE
			// 
			this->CE->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->CE->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->CE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->CE->ForeColor = System::Drawing::Color::White;
			this->CE->Location = System::Drawing::Point(101, 200);
			this->CE->Name = L"CE";
			this->CE->Size = System::Drawing::Size(92, 54);
			this->CE->TabIndex = 26;
			this->CE->Text = L"CE";
			this->CE->UseVisualStyleBackColor = false;
			this->CE->Click += gcnew System::EventHandler(this, &MyForm::CE_Click_1);
			// 
			// btn_C
			// 
			this->btn_C->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->btn_C->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_C->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_C->ForeColor = System::Drawing::Color::White;
			this->btn_C->Location = System::Drawing::Point(199, 200);
			this->btn_C->Name = L"btn_C";
			this->btn_C->Size = System::Drawing::Size(92, 54);
			this->btn_C->TabIndex = 25;
			this->btn_C->Text = L"C";
			this->btn_C->UseVisualStyleBackColor = false;
			this->btn_C->Click += gcnew System::EventHandler(this, &MyForm::btn_C_Click);
			// 
			// btn_percent
			// 
			this->btn_percent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->btn_percent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_percent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_percent->ForeColor = System::Drawing::Color::White;
			this->btn_percent->Location = System::Drawing::Point(3, 200);
			this->btn_percent->Name = L"btn_percent";
			this->btn_percent->Size = System::Drawing::Size(92, 54);
			this->btn_percent->TabIndex = 24;
			this->btn_percent->Text = L"%";
			this->btn_percent->UseVisualStyleBackColor = false;
			this->btn_percent->Click += gcnew System::EventHandler(this, &MyForm::btn_percent_Click);
			// 
			// btn_usun
			// 
			this->btn_usun->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->btn_usun->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_usun->Font = (gcnew System::Drawing::Font(L"Wingdings", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->btn_usun->ForeColor = System::Drawing::Color::White;
			this->btn_usun->Location = System::Drawing::Point(297, 200);
			this->btn_usun->Name = L"btn_usun";
			this->btn_usun->Size = System::Drawing::Size(92, 54);
			this->btn_usun->TabIndex = 23;
			this->btn_usun->Text = L"";
			this->btn_usun->UseVisualStyleBackColor = false;
			this->btn_usun->Click += gcnew System::EventHandler(this, &MyForm::btn_usun_Click);
			// 
			// btn_dot
			// 
			this->btn_dot->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(92)), static_cast<System::Int32>(static_cast<System::Byte>(91)),
				static_cast<System::Int32>(static_cast<System::Byte>(91)));
			this->btn_dot->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_dot->ForeColor = System::Drawing::Color::White;
			this->btn_dot->Location = System::Drawing::Point(199, 498);
			this->btn_dot->Name = L"btn_dot";
			this->btn_dot->Size = System::Drawing::Size(92, 54);
			this->btn_dot->TabIndex = 28;
			this->btn_dot->Text = L",";
			this->btn_dot->UseVisualStyleBackColor = false;
			this->btn_dot->Click += gcnew System::EventHandler(this, &MyForm::btn_dot_Click);
			// 
			// btn_minus_plus
			// 
			this->btn_minus_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(92)), static_cast<System::Int32>(static_cast<System::Byte>(91)),
				static_cast<System::Int32>(static_cast<System::Byte>(91)));
			this->btn_minus_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_minus_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_minus_plus->ForeColor = System::Drawing::Color::White;
			this->btn_minus_plus->Location = System::Drawing::Point(3, 497);
			this->btn_minus_plus->Name = L"btn_minus_plus";
			this->btn_minus_plus->Size = System::Drawing::Size(92, 54);
			this->btn_minus_plus->TabIndex = 29;
			this->btn_minus_plus->Text = L"+/-";
			this->btn_minus_plus->UseVisualStyleBackColor = false;
			this->btn_minus_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_minus_plus_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Gray;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(3, 140);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(92, 54);
			this->button3->TabIndex = 30;
			this->button3->Text = L"M";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Gray;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(101, 140);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(92, 54);
			this->button4->TabIndex = 31;
			this->button4->Text = L"M+";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Gray;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(199, 140);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(92, 54);
			this->button5->TabIndex = 32;
			this->button5->Text = L"M-";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Gray;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(297, 140);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(92, 54);
			this->button6->TabIndex = 33;
			this->button6->Text = L"MC";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->ClientSize = System::Drawing::Size(396, 559);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->btn_minus_plus);
			this->Controls->Add(this->btn_dot);
			this->Controls->Add(this->CE);
			this->Controls->Add(this->btn_C);
			this->Controls->Add(this->btn_percent);
			this->Controls->Add(this->btn_usun);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->btn_equal);
			this->Controls->Add(this->btn_1x);
			this->Controls->Add(this->btn_divide);
			this->Controls->Add(this->btn_mult);
			this->Controls->Add(this->b12);
			this->Controls->Add(this->b11);
			this->Controls->Add(this->b10);
			this->Controls->Add(this->b9);
			this->Controls->Add(this->btn_plus);
			this->Controls->Add(this->b7);
			this->Controls->Add(this->b6);
			this->Controls->Add(this->b5);
			this->Controls->Add(this->btn_minus);
			this->Controls->Add(this->b3);
			this->Controls->Add(this->b2);
			this->Controls->Add(this->b1);
			this->Controls->Add(this->result_label);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Standardowy";
			this->TransparencyKey = System::Drawing::Color::LightGray;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			
		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void b1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void b2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void b3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void b5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void b6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void b7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void b9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void b10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void b11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void b12_Click(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button_exit_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void BtnNumber_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->result_label->ForeColor = Color::White;
		Button^ numbers = safe_cast<Button^>(sender);
		if (result_label->Text == "0" || is_equal) {
			result_label->Text = numbers->Text;
			is_equal = false;
		}
		else

			result_label->Text = result_label->Text + numbers->Text;
	}
	private: System::Void CE_Click_1(System::Object^ sender, System::EventArgs^ e) {
		float second = System::Convert::ToDouble(this->result_label->Text);
		second = 0;
		this->result_label->Text = System::Convert::ToString(result);
	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		result = System::Convert::ToDouble(this->result_label->Text);
		result = pow(result,2);
		result_label->Text = System::Convert::ToString(result);
		is_equal = true;
	}
	private: System::Void btn_divide_Click(System::Object^ sender, System::EventArgs^ e) {
		Maths_action('/');
	}
	private: System::Void btn_mult_Click(System::Object^ sender, System::EventArgs^ e) {
		Maths_action('*');
	}
	private: System::Void btn_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		Maths_action('-');
	}
	private: System::Void btn_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		Maths_action('+');
	}
	private: System::Void Maths_action(char operation) {
		this->first_num = System::Convert::ToDouble(this->result_label->Text);
		this->user_operation = operation;
		this->result_label->Text = "0";
	}
	private: System::Void b15_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_equal_Click(System::Object^ sender, System::EventArgs^ e) {
		if (user_operation == ' ')
			return;
		float second = System::Convert::ToDouble(this->result_label->Text);
		float  res;
		switch (this->user_operation) {
		case '+':
			res = this->first_num + second;
			break;
		case '-':
			res = this->first_num - second;
			break;
		case '*':
			res = this->first_num * second;
			break;
		case '%':
			res = this->first_num * second/100;
			break;
		case '/':
			if (second == 0) {
				res = 0;
				this->result_label->ForeColor = Color::Red;
				MessageBox::Show(this, "Cannot divide by zero", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
				res = this->first_num / second;
			break;
		}
		is_equal = true;
		this->result_label->Text = System::Convert::ToString(res);
	}
	private: System::Void btn_usun_Click(System::Object^ sender, System::EventArgs^ e) {
		result_label->Text = result_label->Text->Remove(result_label->Text->Length - 1, 1);

	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_minus_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		double num = System::Convert::ToDouble(this->result_label->Text);
		num *= -1;//num=-1*num
		result_label->Text = System::Convert::ToString(num);
	}
	private: System::Void btn_percent_Click(System::Object^ sender, System::EventArgs^ e) {
		Maths_action('%');
	}
private: System::Void btn_dot_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ text = this->result_label->Text;
	if(!text->Contains(","))
	this->result_label->Text = this->result_label->Text + ",";
}
	  
			  private: System::Void btn_1x_Click(System::Object^ sender, System::EventArgs^ e) {
				result = System::Convert::ToDouble(this->result_label->Text);
				  result = 1 / result;
				  result_label->Text = System::Convert::ToString(result);
				  is_equal = true;
			  }
private: System::Void btn_C_Click(System::Object^ sender, System::EventArgs^ e) {
	this->result_label->Text = "0";
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	result = System::Convert::ToDouble(this->result_label->Text);
	result = sqrt(result);
	result_label->Text = System::Convert::ToString(result);
	is_equal = true;
}


public: 
	double memory = 0.0;
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	double valueToSubtract = Double::Parse(result_label->Text); // M-
	memory -= valueToSubtract;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	double valueToAdd = Double::Parse(result_label->Text); // M+
	memory += valueToAdd;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { 
	result_label->Text = memory.ToString(); // M
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	memory = 0.0; // MC
}
	   

};
	
}

