#pragma once

namespace aplicacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormularioVentas
	/// </summary>
	public ref class FormularioVentas : public System::Windows::Forms::Form
	{
	public:
		FormularioVentas(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FormularioVentas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox2;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox4;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox2 = (gcnew System::Windows::Forms::CheckedListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label1->Location = System::Drawing::Point(364, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(296, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Administración: Área de Ventas 📈💼";
			this->label1->Click += gcnew System::EventHandler(this, &FormularioVentas::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(424, 92);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(159, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Tag = L"";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->button1->Location = System::Drawing::Point(616, 92);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Buscar 🔍";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label2->Location = System::Drawing::Point(474, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(169, 19);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Buscar productos  📦";
			this->label2->Click += gcnew System::EventHandler(this, &FormularioVentas::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label3->Location = System::Drawing::Point(146, 45);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 19);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Buscar cliente 🧑‍🤝‍🧑";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::Highlight;
			this->button2->Location = System::Drawing::Point(288, 79);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Buscar 🔍";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(96, 79);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(159, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->Tag = L"";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label4->Location = System::Drawing::Point(394, 90);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 19);
			this->label4->TabIndex = 9;
			this->label4->Text = L"ID";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label5->Location = System::Drawing::Point(7, 77);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(74, 19);
			this->label5->TabIndex = 10;
			this->label5->Text = L"DNI/RUC";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label6->Location = System::Drawing::Point(866, 90);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(212, 19);
			this->label6->TabIndex = 11;
			this->label6->Text = L"RESUMEN DE LA COMPA 🏷️";
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(6, 399);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(767, 238);
			this->listBox1->TabIndex = 15;
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkedListBox1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(71, 158);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(662, 154);
			this->checkedListBox1->TabIndex = 16;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::Highlight;
			this->button3->Location = System::Drawing::Point(895, 595);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(173, 23);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Pagar";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label7->Location = System::Drawing::Point(639, 377);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(143, 19);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Listado de Ventas";
			this->label7->Click += gcnew System::EventHandler(this, &FormularioVentas::label7_Click);
			// 
			// checkedListBox2
			// 
			this->checkedListBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkedListBox2->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->checkedListBox2->FormattingEnabled = true;
			this->checkedListBox2->Location = System::Drawing::Point(6, 108);
			this->checkedListBox2->Name = L"checkedListBox2";
			this->checkedListBox2->Size = System::Drawing::Size(331, 34);
			this->checkedListBox2->TabIndex = 19;
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox2->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(831, 124);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(278, 342);
			this->listBox2->TabIndex = 20;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label8->Location = System::Drawing::Point(612, 136);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(112, 19);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Productos  📦";
			this->label8->Click += gcnew System::EventHandler(this, &FormularioVentas::label8_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(973, 507);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(126, 20);
			this->textBox3->TabIndex = 22;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label9->Location = System::Drawing::Point(850, 508);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(117, 19);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Descuento  S/:";
			this->label9->Click += gcnew System::EventHandler(this, &FormularioVentas::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label10->Location = System::Drawing::Point(882, 548);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(72, 19);
			this->label10->TabIndex = 25;
			this->label10->Text = L"Total  S/:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(973, 547);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(126, 20);
			this->textBox4->TabIndex = 24;
			// 
			// FormularioVentas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1164, 665);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->checkedListBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormularioVentas";
			this->Text = L"FormularioVentas";
			this->Load += gcnew System::EventHandler(this, &FormularioVentas::FormularioVentas_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void FormularioVentas_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
