#pragma once
#include "addtask.h"
#include <Windows.h>
#include <iostream>
#include <string>
#include <string.h>
#include <fstream>
#include <time.h>

namespace TaskManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainPLace
	/// </summary>
	public ref class MainPLace : public System::Windows::Forms::Form {
	public:
		MainPLace(void) {
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainPLace() {
			if (components) {
				delete components;
			}
		}




	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ settingsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ themeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ darkThemeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ lightThemeToolStripMenuItem;

	private: System::ComponentModel::IContainer^ components;
	protected:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void) {
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainPLace::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->themeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->darkThemeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lightThemeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabPage1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->Location = System::Drawing::Point(12, 38);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Add task";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainPLace::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::MediumSeaGreen;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->Location = System::Drawing::Point(121, 38);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(103, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Remove task";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainPLace::button3_Click_1);
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Linen;
			this->tabPage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(592, 171);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Task";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label1->Location = System::Drawing::Point(7, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Type of task";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label2->Location = System::Drawing::Point(7, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Text of task";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Location = System::Drawing::Point(12, 76);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(600, 197);
			this->tabControl1->TabIndex = 6;
			this->tabControl1->BackColor = Color::Linen;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(423, 38);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(185, 20);
			this->dateTimePicker1->TabIndex = 7;
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(466, 7);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(120, 169);
			this->checkedListBox1->TabIndex = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->settingsToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->menuStrip1->Size = System::Drawing::Size(624, 24);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->themeToolStripMenuItem });
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->settingsToolStripMenuItem->Text = L"Settings";
			// 
			// themeToolStripMenuItem
			// 
			this->themeToolStripMenuItem->BackColor = System::Drawing::Color::Cornsilk;
			this->themeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->darkThemeToolStripMenuItem,
					this->lightThemeToolStripMenuItem
			});
			this->themeToolStripMenuItem->Name = L"themeToolStripMenuItem";
			this->themeToolStripMenuItem->Size = System::Drawing::Size(111, 22);
			this->themeToolStripMenuItem->Text = L"Theme";
			// 
			// darkThemeToolStripMenuItem
			// 
			this->darkThemeToolStripMenuItem->BackColor = System::Drawing::Color::Cornsilk;
			this->darkThemeToolStripMenuItem->Name = L"darkThemeToolStripMenuItem";
			this->darkThemeToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->darkThemeToolStripMenuItem->Text = L"Dark Theme";
			this->darkThemeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainPLace::darkThemeToolStripMenuItem_Click);
			// 
			// lightThemeToolStripMenuItem
			// 
			this->lightThemeToolStripMenuItem->BackColor = System::Drawing::Color::Cornsilk;
			this->lightThemeToolStripMenuItem->Name = L"lightThemeToolStripMenuItem";
			this->lightThemeToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->lightThemeToolStripMenuItem->Text = L"Light Theme";
			this->lightThemeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainPLace::lightThemeToolStripMenuItem_Click);
			// 
			// MainPLace
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Cornsilk;
			this->ClientSize = System::Drawing::Size(624, 285);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainPLace";
			this->Text = L"Task Manager";
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		   //удаление элемента массива
	private: array <System::Windows::Forms::Label^>^ RemElem(array <System::Windows::Forms::Label^>^ arr, int razm, int num) {
		array <System::Windows::Forms::Label^>^ local = MakeArray(razm, 7, 7);
		int j = 0;
		for (int i = 0; i < razm; i++) {
			if (i != num) {
				local[j] = arr[i];
				local[j]->Location = System::Drawing::Point(arr[i]->Location.X, arr[i]->Location.Y);
				j++;
			}
		}
		delete[] arr;
		return local;
	}
		   //добавление элемента массива
	private: array <System::Windows::Forms::Label^>^ AddElem(array <System::Windows::Forms::Label^>^ arr, int razm) {
		array <System::Windows::Forms::Label^>^ local = MakeArray(razm + 1, 7, 7);
		int x = arr[0]->Location.X, y = arr[0]->Location.Y;
		for (int i = 0; i < razm - 1; i++) {
			local[i] = arr[i];
		}
		for (int i = 0; i < razm; i++) {
			local[i]->Location = System::Drawing::Point(x, y);
		}
		delete[] arr;
		return local;
	}
		   //добавление элемента массива
	private: array <array<String^>^>^ AddElem(array <array<String^>^>^ arr, int *razm) {
		array<array<String^>^>^ new_arr = gcnew array<array<String^>^>(3);
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < *razm; j++) {
				new_arr[i][j] = arr[i][j];
			}
		}
		++* razm;
		delete[] arr;
		return new_arr;
	}
		   //создание массива
	private: array<System::Windows::Forms::Label^>^ MakeArray(int razm, int x, int y) {

		array<System::Windows::Forms::Label^>^ local = gcnew array<System::Windows::Forms::Label^ >(razm);
		for (int i = 0; i < razm; i++) {
			local[i] = gcnew System::Windows::Forms::Label;
			local[i]->AutoSize = true;
			local[i]->Location = System::Drawing::Point(x, y);
			local[i]->Name = L"label";
			local[i]->Size = System::Drawing::Size(0, 13);
			local[i]->TabIndex = i;
		}
		return local;
	}
		   //цвета приложения
	private: Color^ back_theme = Color::Linen;
		   //количество заданий
	private: int amount_task = 1;
		   //сохры
	private: String^ str;
		   //данные
	private: int amount_data = 1;
	private: array <array<String^>^>^ data = gcnew array<array<String^>^>(3);
		   //массив типов заданий
	private: array <System::Windows::Forms::Label^>^ types_of_tasks = MakeArray(amount_task + 1, 7, 7);
		   //массив текстов заданий
	private: array <System::Windows::Forms::Label^>^ texts_of_tasks = MakeArray(amount_task + 1, 7, 30);
		//чтение сохраненых данных
	public: void ReadSaveData() {
		for (int i = 0; i < 3; i++) {
			data[i] = gcnew array<String^>(1);
			data[i][0] = "";
		}
		std::ifstream save_file("C:\\Пользователи\\даниил\\Документы\\SaveData.txt");
		if(save_file.is_open()) {
			bool title = false, type = false, text = false;
			while (!save_file.eof()) {
				std::string a = "";
				std::getline(save_file, a);
				if (a == "**Title**") {
					title = true;
					type = false;
					text = false;
					continue;
				}
				else if (a == "**Type**") {
					title = false;
					type = true;
					text = false;
					continue;
				}
				else if (a == "**Text**") {
					title = false;
					text = false;
					type = true;
					continue;
				}
				if (title) {
					data[0][amount_data - 1] = gcnew System::String(a.c_str());
				}
				else if (type) {
					data[1][amount_data - 1] = gcnew System::String(a.c_str());
				}
				else if(text) {
					data[2][amount_data - 1] = gcnew System::String(a.c_str());
				}
				std::cout << a << std::endl;
			}
			save_file.close();
		}
		else {
			MessageBox::Show("все пизда");
		}
	}
		   //кнопка добавления задания
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		addtask task;
		task.ShowDialog();
		if (task.GetName() != nullptr) {
			String^ Name = task.GetName();
			String^ Type = task.GetType();
			String^ Text = task.GetText();
			if (Name == "") {
				Name = "Task " + (amount_task + 1);
			}
			if (Type == "") {
				Type = "wihout type";
			}
			if (Text == "") {
				Text = "wihout text";
			}
			tabControl1->TabPages->Add(Name);
			tabControl1->TabPages[amount_task]->BackColor = (back_theme->Name == "DimGray") ? Color::DimGray : Color::Linen;
			types_of_tasks = AddElem(types_of_tasks, amount_task + 1);
			texts_of_tasks = AddElem(texts_of_tasks, amount_task + 1);
			types_of_tasks[amount_task]->Text = Type + ", " + dateTimePicker1->Value;
			texts_of_tasks[amount_task]->Text = Text;
			tabControl1->TabPages[amount_task]->Controls->Add(types_of_tasks[amount_task]);
			tabControl1->TabPages[amount_task]->Controls->Add(texts_of_tasks[amount_task]);
			amount_task++;
		}
	}
		   //удаление задания
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		try {
			tabControl1->Controls->RemoveAt(tabControl1->SelectedIndex);
			types_of_tasks = RemElem(types_of_tasks, amount_task, tabControl1->SelectedIndex);
			texts_of_tasks = RemElem(texts_of_tasks, amount_task, tabControl1->SelectedIndex);
			amount_task--;
		}
		catch (System::ArgumentOutOfRangeException^) {
			MessageBox::Show("You can't remove this task");
		}
		catch (System::OverflowException^) {
			MessageBox::Show("You can't remove this task");
		}
	}
		   //темная тема
	private: System::Void darkThemeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		tabControl1->BackColor = Color::DimGray;
		for (int i = 0; i < amount_task; i++) {
			tabControl1->TabPages[i]->BackColor = Color::DimGray;
		}
		back_theme = Color::DimGray;
		MainPLace::BackColor = Color::Gray;
		menuStrip1->BackColor = Color::Gray;
		lightThemeToolStripMenuItem->BackColor = Color::Gray;
		darkThemeToolStripMenuItem->BackColor = Color::Gray;
		themeToolStripMenuItem->BackColor = Color::Gray;
	}
		   //светлая тема
	private: System::Void lightThemeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		tabControl1->BackColor = Color::Linen;
		for (int i = 0; i < amount_task; i++) {
			tabControl1->TabPages[i]->BackColor = Color::Linen;
		}
		back_theme = Color::Linen;
		MainPLace::BackColor = Color::Cornsilk;
		menuStrip1->BackColor = Color::Cornsilk;
		lightThemeToolStripMenuItem->BackColor = Color::Cornsilk;
		darkThemeToolStripMenuItem->BackColor = Color::Cornsilk;
		themeToolStripMenuItem->BackColor = Color::Cornsilk;
	}
	};
}
