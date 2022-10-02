#pragma once
#include <iostream>
#include <vector> 
#include <algorithm>
#include <ctime> 
#include <chrono>
#include <windows.h>
#include "Functions.h"


namespace BucketSort {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;
	using namespace std;
	using namespace System::Windows::Forms::DataVisualization::Charting;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		Function* mFunction = new Function();



	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripProgressBar^ toolStripProgressBar1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::CheckBox^ checkBox1;





	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripProgressBar1 = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(0, 1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1031, 500);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->groupBox3);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1023, 474);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Расчеты";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkGray;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(633, 59);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(70, 32);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Тест";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->dataGridView2);
			this->groupBox3->Controls->Add(this->dataGridView1);
			this->groupBox3->Location = System::Drawing::Point(6, 144);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(703, 324);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Выходные данные";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(454, 16);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(85, 13);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Коэффициенты";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 29);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(146, 13);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Y - время сортировки (мкс)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(186, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Х - количество элементов массива";
			// 
			// dataGridView2
			// 
			this->dataGridView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2
			});
			this->dataGridView2->Location = System::Drawing::Point(383, 45);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(314, 273);
			this->dataGridView2->TabIndex = 1;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Тип";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 200;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn2->HeaderText = L"Значение";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(6, 45);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(371, 273);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column1->HeaderText = L"X";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column2->HeaderText = L"Y";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column3->HeaderText = L"X*X";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column4->HeaderText = L"Y*Y";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column5->HeaderText = L"X*Y";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->Controls->Add(this->listBox2);
			this->groupBox2->Controls->Add(this->listBox1);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Location = System::Drawing::Point(715, 9);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(300, 459);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Массивы";
			// 
			// listBox2
			// 
			this->listBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(153, 50);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(147, 407);
			this->listBox2->TabIndex = 5;
			// 
			// listBox1
			// 
			this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(1, 50);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(147, 407);
			this->listBox1->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(154, 27);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(140, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Отсортированный массив";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 27);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(141, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Несортированный массив";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->numericUpDown3);
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(6, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(611, 132);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Входные данные";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::Red;
			this->label10->Location = System::Drawing::Point(398, 85);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(147, 13);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Путь должен существовать";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(401, 53);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(193, 20);
			this->textBox1->TabIndex = 7;
			this->textBox1->Text = L"C:\\\\test";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(401, 25);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(117, 17);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"Сохранить в файл";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(257, 83);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(120, 20);
			this->numericUpDown3->TabIndex = 5;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(257, 53);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 20);
			this->numericUpDown2->TabIndex = 4;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(257, 23);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 3;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 7000, 0, 0, 0 });
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(71, 85);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(180, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Приращение элементов массива:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(120, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Количество повторений:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(231, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Начальное количество элементов массива:";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->groupBox5);
			this->tabPage2->Controls->Add(this->groupBox4);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1023, 474);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Графики";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox5->Controls->Add(this->button2);
			this->groupBox5->Controls->Add(this->label9);
			this->groupBox5->Controls->Add(this->chart2);
			this->groupBox5->Location = System::Drawing::Point(514, 3);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(505, 475);
			this->groupBox5->TabIndex = 1;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"График линейной регрессии";
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(424, 446);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Расчет";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(6, 448);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(195, 15);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Уравнение линейной регрессии:";
			// 
			// chart2
			// 
			this->chart2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->chart2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->chart2->BorderlineColor = System::Drawing::SystemColors::ActiveBorder;
			chartArea1->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart2->Legends->Add(legend1);
			this->chart2->Location = System::Drawing::Point(3, 19);
			this->chart2->Name = L"chart2";
			this->chart2->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Berry;
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L" ";
			this->chart2->Series->Add(series1);
			this->chart2->Size = System::Drawing::Size(500, 416);
			this->chart2->TabIndex = 1;
			this->chart2->Text = L"chart2";
			// 
			// groupBox4
			// 
			this->groupBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox4->Controls->Add(this->chart1);
			this->groupBox4->Location = System::Drawing::Point(3, 3);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(505, 475);
			this->groupBox4->TabIndex = 0;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Точечный график зависимости";
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->chart1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->chart1->BorderlineColor = System::Drawing::SystemColors::ActiveBorder;
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(3, 19);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SeaGreen;
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L" ";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(496, 453);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripProgressBar1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 504);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1031, 22);
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripProgressBar1
			// 
			this->toolStripProgressBar1->Name = L"toolStripProgressBar1";
			this->toolStripProgressBar1->Size = System::Drawing::Size(100, 16);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1031, 526);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->tabControl1);
			this->MinimumSize = System::Drawing::Size(1047, 565);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Сортировка данных. Метод Bucket sort. Вероятностный закон распределения случайных"
				L" величин ExtremLB.";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		float a = 0;
		float b = 0;
		int c = 0;

	private: Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		chart1->ChartAreas->Clear();
		chart1->Series->Clear();
		dataGridView1->Rows->Clear();
		dataGridView2->Rows->Clear();

		float A = 0.0001, B = 8, C = 0.511;

		// Начальное количество элементов случайной последовательности
		int n = Convert::ToInt32(numericUpDown1->Text);
		int n_for_grapg = n;

		// Количество прогонов. Минимум 2.
		int user_repeats = Convert::ToInt32(numericUpDown2->Text);

		c = user_repeats;

		// Приращение элментов массива при повторе
		int increase_value = Convert::ToInt32(numericUpDown3->Text);

		String^ user_path = Convert::ToString(textBox1->Text);

		int repeats = 0; // Ноль всегда по старту.
		float pb_step = static_cast<float>(100) / user_repeats;

		vector <long long> arr_time(user_repeats);
		vector <int> arr_repeats(user_repeats);

		while (repeats < user_repeats)
		{
			listBox1->Items->Clear();
			listBox2->Items->Clear();

			vector <float> arr(n); // Контейнер хранения данных
			
			srand((unsigned)time(NULL)); // Рандомизация значений массивов

			int repeats_path = repeats + 1;

			Convert::ToString(repeats_path);
			String^ path_arr0 = user_path + "\\notsorted";
			String^ path_arr1 = ".txt";
			String^ path_arr = path_arr0 + repeats_path + path_arr1;

			for (int i = 0; i < n; i++)
			{
				arr[i] = mFunction->get_ExtremeLB(A, B, C); // Вызов функции возвращает случайное число

				listBox1->Items->Add(Convert::ToString(arr[i]));

				// Запись в файл неотсортированного массива
				if (checkBox1->Checked)
				{
					StreamWriter^ f = gcnew StreamWriter(path_arr, true);
					f->WriteLine(arr[i]);
					f->Write("\n");
					f->Close();
				}
			}

			auto t1 = chrono::high_resolution_clock::now(); // Начальное время
			mFunction->bucketSort(arr, n);     // Вызов функции сортировки методом Bucket sort
			auto t2 = chrono::high_resolution_clock::now();   // Конечное время

			String^ path_arr00 = user_path + "\\sorted";
			String^ path_arr_sort = path_arr00 + repeats_path + path_arr1;

			for (int i = 0; i < n; i++)
			{
				listBox2->Items->Add(Convert::ToString(arr[i]));

				// Запись в файл отсортированного массива
				if (checkBox1->Checked)
				{
					StreamWriter^ f = gcnew StreamWriter(path_arr_sort, true);
					f->WriteLine(arr[i]);
					f->Write("\n");
					f->Close();
				}
			}

			auto duration = chrono::duration_cast<chrono::microseconds>(t2 - t1).count();  // Искомое время

			toolStripProgressBar1->Value = pb_step * (repeats + 1);

			arr_repeats[repeats] = n;
			arr_time[repeats] = duration;
			n += increase_value;
			repeats++;
			arr.clear();
		}

		float xi = 0;   // Сумма Х
		float xi2 = 0;  // Сумма Х^2
		float yi = 0;   // Сумма Y
		float yi2 = 0;  // Сумма Y^2
		float xiyi = 0; // Сумма X*Y

		for (int i = 0; i < user_repeats; i++)
		{
			xi += arr_repeats[i];
			xi2 += arr_repeats[i] * arr_repeats[i];
			yi += arr_time[i];
			yi2 += arr_time[i] * arr_time[i];
			xiyi += arr_repeats[i] * arr_time[i];

			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = (arr_repeats[i]).ToString(); // Количество элементов массива - по оси X
			dataGridView1->Rows[i]->Cells[1]->Value = (arr_time[i]).ToString();    // Время сортировки массива - по оси Y
			dataGridView1->Rows[i]->Cells[2]->Value = (arr_repeats[i] * arr_repeats[i]).ToString(); // Х^2
			dataGridView1->Rows[i]->Cells[3]->Value = (arr_time[i] * arr_time[i]).ToString();       // Y^2
			dataGridView1->Rows[i]->Cells[4]->Value = (arr_repeats[i] * arr_time[i]).ToString();    // X*Y
		}

		// Подготовка системы уравнений для передачи в функцию Гауса
		float** arr_gauss, * y, * x = nullptr;
		int n_gauss = 2;

		arr_gauss = new float* [n_gauss];
		float as[2][2]{};
		as[0][0] = xi2;
		as[0][1] = xi;
		as[1][0] = xi;
		as[1][1] = user_repeats;

		y = new float[n_gauss];
		y[0] = xiyi;
		y[1] = yi;

		for (int i = 0; i < n_gauss; i++)
		{
			arr_gauss[i] = new float[n_gauss];
			for (int j = 0; j < n_gauss; j++)
			{
				arr_gauss[i][j] = as[i][j];
			}
		}

		x = mFunction->gauss(arr_gauss, y, n_gauss); // Вызов функции определения наименьших квадратов методом Гауса

		a = x[0];
		b = x[1];

		label9->Text = "Уравнение линейной регрессии: Y = " + a.ToString() + " * X + " + b.ToString();
		
		// Добавление строк в таблицу значений
		dataGridView2->Rows->Add();
		dataGridView2->Rows->Add();
		dataGridView2->Rows->Add();
		dataGridView2->Rows->Add();
		dataGridView2->Rows->Add();
		dataGridView2->Rows->Add();
		dataGridView2->Rows->Add();
		dataGridView2->Rows->Add();
		dataGridView2->Rows->Add();

		// Средние значения:

		// Среднее значение Х
		float x_middle = xi / user_repeats;
		dataGridView2->Rows[0]->Cells[0]->Value = "Среднее значение Х";
		dataGridView2->Rows[0]->Cells[1]->Value = (x_middle).ToString();

		// Среднее значение Y
		float y_middle = yi / user_repeats;
		dataGridView2->Rows[1]->Cells[0]->Value = "Среднее значение Y";
		dataGridView2->Rows[1]->Cells[1]->Value = (y_middle).ToString();

		// Среднее значение Х*Y
		float xy_middle = xiyi / user_repeats;
		dataGridView2->Rows[2]->Cells[0]->Value = "Среднее значение Х*Y";
		dataGridView2->Rows[2]->Cells[1]->Value = (xy_middle).ToString();

		//Дисперсия:

		// Дисперсия Х
		float Dx = (xi2 / user_repeats) - (x_middle * x_middle);
		dataGridView2->Rows[3]->Cells[0]->Value = "Дисперсия Х";
		dataGridView2->Rows[3]->Cells[1]->Value = (Dx).ToString();

		// Дисперсия Y
		float Dy = (yi2 / user_repeats) - (y_middle * y_middle);
		dataGridView2->Rows[4]->Cells[0]->Value = "Дисперсия Y";
		dataGridView2->Rows[4]->Cells[1]->Value = (Dy).ToString();

		//Среднеквадратичное отклонение:

		// Среднеквадратичное отклонение Х
		float otkl_x = sqrt(Dx);
		dataGridView2->Rows[5]->Cells[0]->Value = "Среднеквадратичное отклонение Х";
		dataGridView2->Rows[5]->Cells[1]->Value = (otkl_x).ToString();

		// Среднеквадратичное отклонение Y
		float otkl_y = sqrt(Dy);
		dataGridView2->Rows[6]->Cells[0]->Value = "Среднеквадратичное отклонение Y";
		dataGridView2->Rows[6]->Cells[1]->Value = (otkl_y).ToString();

		//Коэффициент корреляции
		float r = (xy_middle - (x_middle * y_middle)) / (otkl_x * otkl_y);
		dataGridView2->Rows[7]->Cells[0]->Value = "Коэффициент корреляции";
		dataGridView2->Rows[7]->Cells[1]->Value = (r).ToString();

		//Коэффициент детерминации
		float R = pow(r, 2);
		dataGridView2->Rows[8]->Cells[0]->Value = "Коэффициент детерминации";
		dataGridView2->Rows[8]->Cells[1]->Value = (R).ToString();

		// Построение точечного графика
		chart1->ChartAreas->Add("ChartArea1");
		chart1->ChartAreas["ChartArea1"]->AxisX->Title = "Количество элементов массива";
		chart1->ChartAreas["ChartArea1"]->AxisX->Minimum = n_for_grapg;
		chart1->ChartAreas["ChartArea1"]->AxisX->Maximum = arr_repeats[static_cast<vector<int, allocator<int>>::size_type>(user_repeats) - 1];
		chart1->ChartAreas["ChartArea1"]->AxisX->Interval = increase_value;

		chart1->ChartAreas["ChartArea1"]->AxisY->Title = "Время сортировки (мкс)";
		chart1->ChartAreas["ChartArea1"]->AxisY->Minimum = arr_time[0];
		chart1->ChartAreas["ChartArea1"]->AxisY->Maximum = arr_time[static_cast<vector<long long, allocator<long long>>::size_type>(user_repeats) - 1];
		chart1->ChartAreas["ChartArea1"]->AxisY->Interval = (arr_time[user_repeats - 1] / user_repeats) * 0.5;

		chart1->Series->Add(" ");
		chart1->Series[0]->ChartType = SeriesChartType::Point;
		chart1->Series[0]->MarkerStyle = MarkerStyle::Circle;
		chart1->Series[0]->MarkerSize = 8;

		for (int i = 0; i < user_repeats; i++)
		{
			chart1->Series[0]->Points->AddXY(arr_repeats[i], arr_time[i]);
		}
		Sleep(500);
		MessageBox::Show("   Выполнено!");
		toolStripProgressBar1->Value = 0;

		// Конец кнопки
	}
	private: Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		chart2->ChartAreas->Clear();
		chart2->Series->Clear();

		// Построение графика регрессии
		chart2->ChartAreas->Add("ChartArea2");
		chart2->ChartAreas["ChartArea2"]->AxisX->Title = "Значения Х";
		
		chart2->ChartAreas["ChartArea2"]->AxisY->Title = "Значения Y";
		chart2->ChartAreas["ChartArea2"]->AxisY->Minimum = b;

		chart2->Series->Add(" ");
		chart2->Series[0]->ChartType = SeriesChartType::Line;
		chart2->Series[0]->MarkerStyle = MarkerStyle::Circle;
		chart2->Series[0]->MarkerSize = 4;

		for (float i = 0; i < c; i += 0.1)
		{
			chart2->Series[0]->Points->AddXY(i, a * i + b);
		}

		// Конец кнопки
	}
	};
}
