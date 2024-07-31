#pragma once

namespace aplicacion {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class ClientesFormulario : public System::Windows::Forms::Form
    {
    public:
        ClientesFormulario(void)
        {
            InitializeComponent();
        }

    protected:
        ~ClientesFormulario()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::TextBox^ textBox8;

    protected:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
            this->label1->Location = System::Drawing::Point(450, 19);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(160, 19);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Área de Clientes 👥";
            this->label1->Click += gcnew System::EventHandler(this, &ClientesFormulario::label1_Click);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::SystemColors::MenuHighlight;
            this->label3->Location = System::Drawing::Point(537, 198);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(128, 19);
            this->label3->TabIndex = 15;
            this->label3->Text = L"Lista de clientes";
            // 
            // button3
            // 
            this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->ForeColor = System::Drawing::SystemColors::Highlight;
            this->button3->Location = System::Drawing::Point(190, 135);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(75, 23);
            this->button3->TabIndex = 14;
            this->button3->Text = L"Agregar";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &ClientesFormulario::button3_Click);
            // 
            // button2
            // 
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->ForeColor = System::Drawing::Color::Red;
            this->button2->Location = System::Drawing::Point(1056, 191);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(75, 23);
            this->button2->TabIndex = 11;
            this->button2->Text = L"Eliminar";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &ClientesFormulario::button2_Click);
            // 
            // button1
            // 
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::SystemColors::Highlight;
            this->button1->Location = System::Drawing::Point(867, 191);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(75, 23);
            this->button1->TabIndex = 10;
            this->button1->Text = L"Buscar";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &ClientesFormulario::button1_Click);
            // 
            // checkedListBox1
            // 
            this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->checkedListBox1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
            this->checkedListBox1->FormattingEnabled = true;
            this->checkedListBox1->Location = System::Drawing::Point(12, 238);
            this->checkedListBox1->Name = L"checkedListBox1";
            this->checkedListBox1->Size = System::Drawing::Size(1103, 334);
            this->checkedListBox1->TabIndex = 9;
            this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ClientesFormulario::checkedListBox1_SelectedIndexChanged);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::SystemColors::Highlight;
            this->label4->Location = System::Drawing::Point(38, 58);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(55, 13);
            this->label4->TabIndex = 17;
            this->label4->Text = L"Dni/Ruc";
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(111, 55);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(100, 20);
            this->textBox2->TabIndex = 16;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::SystemColors::Highlight;
            this->label2->Location = System::Drawing::Point(38, 93);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(56, 13);
            this->label2->TabIndex = 19;
            this->label2->Text = L"Nombres";
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(111, 90);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(192, 20);
            this->textBox1->TabIndex = 18;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::SystemColors::Highlight;
            this->label5->Location = System::Drawing::Point(251, 58);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(46, 13);
            this->label5->TabIndex = 21;
            this->label5->Text = L"Celular";
            // 
            // textBox3
            // 
            this->textBox3->Location = System::Drawing::Point(324, 55);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(100, 20);
            this->textBox3->TabIndex = 20;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::SystemColors::Highlight;
            this->label6->Location = System::Drawing::Point(309, 93);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(61, 13);
            this->label6->TabIndex = 23;
            this->label6->Text = L"Direccion";
            this->label6->Click += gcnew System::EventHandler(this, &ClientesFormulario::label6_Click);
            // 
            // textBox4
            // 
            this->textBox4->Location = System::Drawing::Point(383, 89);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(328, 20);
            this->textBox4->TabIndex = 22;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->ForeColor = System::Drawing::SystemColors::Highlight;
            this->label7->Location = System::Drawing::Point(468, 55);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(41, 13);
            this->label7->TabIndex = 25;
            this->label7->Text = L"E-mail";
            this->label7->Click += gcnew System::EventHandler(this, &ClientesFormulario::label7_Click);
            // 
            // textBox5
            // 
            this->textBox5->Location = System::Drawing::Point(541, 52);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(170, 20);
            this->textBox5->TabIndex = 24;
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->ForeColor = System::Drawing::SystemColors::Highlight;
            this->label8->Location = System::Drawing::Point(468, 106);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(0, 13);
            this->label8->TabIndex = 27;
            // 
            // button4
            // 
            this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->ForeColor = System::Drawing::SystemColors::Highlight;
            this->button4->Location = System::Drawing::Point(336, 135);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(75, 23);
            this->button4->TabIndex = 28;
            this->button4->Text = L"Actualizar";
            this->button4->UseVisualStyleBackColor = true;
            this->button4->Click += gcnew System::EventHandler(this, &ClientesFormulario::button4_Click);
            // 
            // textBox6
            // 
            this->textBox6->Location = System::Drawing::Point(722, 194);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(139, 20);
            this->textBox6->TabIndex = 29;
            // 
            // button5
            // 
            this->button5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
            this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button5->Location = System::Drawing::Point(958, 191);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(75, 23);
            this->button5->TabIndex = 30;
            this->button5->Text = L"Editar";
            this->button5->UseVisualStyleBackColor = false;
            this->button5->Click += gcnew System::EventHandler(this, &ClientesFormulario::button5_Click);
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->ForeColor = System::Drawing::SystemColors::Highlight;
            this->label9->Location = System::Drawing::Point(738, 52);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(47, 13);
            this->label9->TabIndex = 32;
            this->label9->Text = L"Credito";
            // 
            // textBox7
            // 
            this->textBox7->Location = System::Drawing::Point(811, 49);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(100, 20);
            this->textBox7->TabIndex = 31;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->ForeColor = System::Drawing::SystemColors::Highlight;
            this->label10->Location = System::Drawing::Point(738, 97);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(72, 13);
            this->label10->TabIndex = 34;
            this->label10->Text = L"Preferencia";
            // 
            // textBox8
            // 
            this->textBox8->Location = System::Drawing::Point(811, 94);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(100, 20);
            this->textBox8->TabIndex = 33;
            // 
            // clientesFormulario
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1164, 665);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->textBox8);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->textBox7);
            this->Controls->Add(this->button5);
            this->Controls->Add(this->textBox6);
            this->Controls->Add(this->button4);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->textBox5);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->textBox4);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->checkedListBox1);
            this->Controls->Add(this->label1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"clientesFormulario";
            this->Load += gcnew System::EventHandler(this, &ClientesFormulario::clientesFormulario_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
        // Código para agregar cliente
    }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        // Código para eliminar cliente
    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        // Código para buscar cliente
    }
    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
        // Código para actualizar cliente
    }
    private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
        // Código para editar cliente
    }
    private: System::Void clientesFormulario_Load(System::Object^ sender, System::EventArgs^ e) {
        // Inicializar el formulario si es necesario
    }
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    };
}
