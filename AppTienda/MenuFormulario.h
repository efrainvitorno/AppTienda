#pragma once

#include "InicioFormulario.h"
#include "ClientesFormulario.h"
#include "FormularioVentas.h"
#include "FormularioProductos.h"

namespace aplicacion {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MenuFormulario : public System::Windows::Forms::Form
    {
    public:
        MenuFormulario(void)
        {
            InitializeComponent();
        }

    protected:
        ~MenuFormulario()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Panel^ panel_lateral;
    private: System::Windows::Forms::Panel^ margen;
    private: System::Windows::Forms::Panel^ panel_contenedor;
    private: System::Windows::Forms::Label^ piedepagina;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Label^ label1;

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->panel_lateral = (gcnew System::Windows::Forms::Panel());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->piedepagina = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->margen = (gcnew System::Windows::Forms::Panel());
            this->panel_contenedor = (gcnew System::Windows::Forms::Panel());
            this->panel_lateral->SuspendLayout();
            this->SuspendLayout();
            // 
            // panel_lateral
            // 
            this->panel_lateral->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->panel_lateral->Controls->Add(this->label1);
            this->panel_lateral->Controls->Add(this->button4);
            this->panel_lateral->Controls->Add(this->button3);
            this->panel_lateral->Controls->Add(this->button2);
            this->panel_lateral->Controls->Add(this->piedepagina);
            this->panel_lateral->Controls->Add(this->button1);
            this->panel_lateral->Controls->Add(this->margen);
            this->panel_lateral->Cursor = System::Windows::Forms::Cursors::Hand;
            this->panel_lateral->Dock = System::Windows::Forms::DockStyle::Left;
            this->panel_lateral->Location = System::Drawing::Point(0, 0);
            this->panel_lateral->Name = L"panel_lateral";
            this->panel_lateral->Size = System::Drawing::Size(229, 665);
            this->panel_lateral->TabIndex = 0;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::SystemColors::InactiveBorder;
            this->label1->Location = System::Drawing::Point(3, 303);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(0, 13);
            this->label1->TabIndex = 6;
            // 
            // button4
            // 
            this->button4->BackColor = System::Drawing::Color::White;
            this->button4->Dock = System::Windows::Forms::DockStyle::Top;
            this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->ForeColor = System::Drawing::SystemColors::Highlight;
            this->button4->Location = System::Drawing::Point(0, 223);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(229, 41);
            this->button4->TabIndex = 5;
            this->button4->Text = L"📦 Productos";
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &MenuFormulario::button4_Click);
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::White;
            this->button3->Dock = System::Windows::Forms::DockStyle::Top;
            this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->ForeColor = System::Drawing::SystemColors::Highlight;
            this->button3->Location = System::Drawing::Point(0, 182);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(229, 41);
            this->button3->TabIndex = 4;
            this->button3->Text = L"🤝 Clientes";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &MenuFormulario::button3_Click);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::White;
            this->button2->Dock = System::Windows::Forms::DockStyle::Top;
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->ForeColor = System::Drawing::SystemColors::Highlight;
            this->button2->Location = System::Drawing::Point(0, 141);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(229, 41);
            this->button2->TabIndex = 3;
            this->button2->Text = L"🛒 Ventas";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &MenuFormulario::button2_Click);
            // 
            // piedepagina
            // 
            this->piedepagina->AutoSize = true;
            this->piedepagina->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->piedepagina->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->piedepagina->ForeColor = System::Drawing::SystemColors::HighlightText;
            this->piedepagina->Location = System::Drawing::Point(0, 645);
            this->piedepagina->Name = L"piedepagina";
            this->piedepagina->Size = System::Drawing::Size(116, 20);
            this->piedepagina->TabIndex = 2;
            this->piedepagina->Text = L"V 0.000.00001";
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::White;
            this->button1->Dock = System::Windows::Forms::DockStyle::Top;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::SystemColors::Highlight;
            this->button1->Location = System::Drawing::Point(0, 100);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(229, 41);
            this->button1->TabIndex = 1;
            this->button1->Text = L" 🔄 Inicio";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MenuFormulario::button1_Click);
            // 
            // margen
            // 
            this->margen->Dock = System::Windows::Forms::DockStyle::Top;
            this->margen->Location = System::Drawing::Point(0, 0);
            this->margen->Name = L"margen";
            this->margen->Size = System::Drawing::Size(229, 100);
            this->margen->TabIndex = 0;
            // 
            // panel_contenedor
            // 
            this->panel_contenedor->Cursor = System::Windows::Forms::Cursors::Hand;
            this->panel_contenedor->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel_contenedor->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->panel_contenedor->Location = System::Drawing::Point(229, 0);
            this->panel_contenedor->Name = L"panel_contenedor";
            this->panel_contenedor->Size = System::Drawing::Size(1164, 665);
            this->panel_contenedor->TabIndex = 1;
            this->panel_contenedor->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MenuFormulario::panel_contenedor_Paint_1);
            // 
            // MenuFormulario
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1393, 665);
            this->Controls->Add(this->panel_contenedor);
            this->Controls->Add(this->panel_lateral);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"MenuFormulario";
            this->Text = L"MenuFormulario";
            this->Load += gcnew System::EventHandler(this, &MenuFormulario::MenuFormulario_Load);
            this->panel_lateral->ResumeLayout(false);
            this->panel_lateral->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion

    private: System::Void MenuFormulario_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void piedepagina_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void panel_contenedor_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }

           // Método para abrir paneles
           void AbrirPanel(Form^ formHijo)
           {
               if (this->panel_contenedor->Controls->Count > 0)
                   this->panel_contenedor->Controls->RemoveAt(0);
               formHijo->TopLevel = false;
               formHijo->Dock = DockStyle::Fill;
               this->panel_contenedor->Controls->Add(formHijo);
               this->panel_contenedor->Tag = formHijo;
               formHijo->Show();
           }

           // Manejadores de eventos para los botones
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        this->AbrirPanel(gcnew aplicacion::InicioFormulario());
    }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        this->AbrirPanel(gcnew aplicacion::FormularioVentas());
    }
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
        this->AbrirPanel(gcnew aplicacion::ClientesFormulario());
    }
    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
        this->AbrirPanel(gcnew aplicacion::FormularioProductos());
    }
    private: System::Void panel_contenedor_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }
};
}

