#pragma once
#include "Node.h"
namespace Project7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	private: System::Windows::Forms::TextBox^ textBox8;
	public:

	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;

	public:

	public:

	public:
		Graphics^ g;
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
    private: System::Windows::Forms::Button^ button1;
    protected:
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::TextBox^ textBox6;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::TextBox^ textBox7;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
        RedBlackTree tree;
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(743, 121);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 55);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(726, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(159, 30);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"Какое число ";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(984, 12);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(271, 30);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"Наличие какого числа";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(1049, 121);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(153, 55);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Проверить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(688, 48);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(267, 30);
			this->textBox3->TabIndex = 4;
			this->textBox3->Text = L"необходимо добавить";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(765, 85);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 30);
			this->textBox4->TabIndex = 5;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(984, 48);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(283, 30);
			this->textBox5->TabIndex = 6;
			this->textBox5->Text = L" необходимо проверить";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(1074, 84);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 30);
			this->textBox6->TabIndex = 7;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(743, 191);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(473, 30);
			this->textBox7->TabIndex = 8;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(89, 12);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(579, 30);
			this->textBox8->TabIndex = 9;
			this->textBox8->Text = L"Если необходимо отображать дерево - введите 1";
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox10->Location = System::Drawing::Point(316, 69);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 30);
			this->textBox10->TabIndex = 11;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox10_TextChanged);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(305, 121);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(124, 55);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Ввести ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(1409, 120);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(143, 55);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Удалить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox9->Location = System::Drawing::Point(1396, 12);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(156, 30);
			this->textBox9->TabIndex = 14;
			this->textBox9->Text = L"Какое число ";
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox11->Location = System::Drawing::Point(1341, 48);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(262, 30);
			this->textBox11->TabIndex = 15;
			this->textBox11->Text = L"необходимо удалить";
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox12->Location = System::Drawing::Point(1424, 84);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 30);
			this->textBox12->TabIndex = 16;
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1615, 694);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
public: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (System::Convert::ToString(textBox4->Text) != "") {
			int chislo = System::Convert::ToInt64(textBox4->Text);
			tree.insert(chislo);
	}
	int kordx = 720;
	int kordy = 200;
	int i = 400;
	int f1 = 0;
	fi(f1);
	obxodl(tree.root);
	if (f1 == 1) {
		obxodtext(tree.root, kordx, kordy, i);
	}
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}


	   void obxodtext(Node^ node, int kordx, int kordy, int i) {
		   if (node == nullptr) {
			   return;
		   }
		   TextBox^ textbox = gcnew System::Windows::Forms::TextBox();
		   textbox->Location = Point(kordx + 33, kordy + 10);
		   textbox->Size = System::Drawing::Size(50, 20);
		   textbox->Font = gcnew System::Drawing::Font("Arial", 10);
		   textbox->ForeColor = System::Drawing::Color::Black;
		   this->Controls->Add(textbox);
		   textbox->Text = System::Convert::ToString(node->value);
		   textbox->Enabled = true;
		   textbox->ReadOnly = true;
		   
		   
		   obxodtext(node->left, kordx - i, kordy + 105, i / 2);
		   obxodtext(node->right, kordx + i, kordy + 105, i / 2);
	   }

	   void obxodl(Node^ node) {
		   if (node == nullptr) {
			   return;
		   }
		   for each (Control ^ control in this->Controls) {
				   if (control->GetType() == TextBox::typeid && control->Location.Y>200) {	 
						   this->Controls->Remove(control);
						   delete control;
				   }
		   }

		   obxodl(node->left);
		   obxodl(node->right);
	   }

	   void obxod(Node^ node, int kordx, int kordy, int i) {
		   if (node == nullptr) {
			   return;
		   }
		   tree.root->color = 2;
		   if (node->color == 1) {
			   g->DrawEllipse(System::Drawing::Pens::Red, kordx, kordy, 50, 50);
		   }
		   else {
			   g->DrawEllipse(System::Drawing::Pens::Black, kordx, kordy, 50, 50);
		   }
		   if (node->left != nullptr) {
			   g->DrawLine(System::Drawing::Pens::Black, kordx+5 , kordy + 45, kordx +25-i, kordy + 100);
		   }
		   if (node->right != nullptr) {
			   g->DrawLine(System::Drawing::Pens::Black, kordx + 45, kordy + 45, kordx + 25+i, kordy + 100);
		   }

		   if (System::Convert::ToString(textBox6->Text) == System::Convert::ToString(node->value)) {
			   int chislo3 = System::Convert::ToInt64(textBox6->Text);
			   if (tree.search(chislo3) == true) {
				   g->DrawEllipse(System::Drawing::Pens::Orange, kordx, kordy, 50, 50);
			   }
		   }
		   

		   obxod(node->left, kordx - i, kordy + 105, i/2);
		   obxod(node->right, kordx + i, kordy + 105,i/2);
	   }
private: System::Void MyForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	g = CreateGraphics();
	g->Clear(System::Drawing::Color::White);
	int kordx = 750;
	int kordy = 200;
	int i = 400;
	int f1 = 0;
	fi(f1);
	if (f1 == 1) {
		obxod(tree.root, kordx, kordy, i);
	}
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		   if (System::Convert::ToString(textBox6->Text) != "") {

				   int chislo2 = System::Convert::ToInt64(textBox6->Text);
				   if (tree.search(chislo2) == true) {
					   textBox7->Text = System::Convert::ToString("Число обнаружено");
				   }
				   else {
					   textBox7->Text = System::Convert::ToString("Такого числа нет");
				   };

		   }

	   }
public: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
	  void fi(int& f1) {
		  String^ r = System::Convert::ToString(textBox10->Text);
		  if (r == "1") {
			  f1 = 1;
		  }
		  if (r == "2") {
			  f1 = 2;
		  }
	  }
private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (System::Convert::ToString(textBox12->Text) != "") {
		int chislo5 = System::Convert::ToInt64(textBox12->Text);
		tree.remove(chislo5);
	}

	int kordx = 720;
	int kordy = 200;
	int i = 400;
	int f1 = 0;
	fi(f1);
	obxodl(tree.root);
	if (f1 == 1) {
		obxodtext(tree.root, kordx, kordy, i);
	}
}
private: System::Void textBox12_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};

   
}
