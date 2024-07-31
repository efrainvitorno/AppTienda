#pragma once
#include "ClientesFormulario.h"
#include "FormularioProductos.h"
#include "FormularioVentas.h"

namespace aplicacion {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class InicioFormulario : public System::Windows::Forms::Form
    {
    public:
        InicioFormulario(void)
        {
            InitializeComponent();
        }

    protected:
        ~InicioFormulario()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Label^ labelTop;
    private: System::Windows::Forms::Label^ labelBottom;

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->labelTop = (gcnew System::Windows::Forms::Label());
            this->labelBottom = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::SystemColors::Highlight;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::SystemColors::HighlightText;
            this->button1->Location = System::Drawing::Point(248, 168);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(188, 63);
            this->button1->TabIndex = 2;
            this->button1->Text = L"Gestión de Clientes";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &InicioFormulario::button1_Click);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::SystemColors::Highlight;
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->ForeColor = System::Drawing::SystemColors::HighlightText;
            this->button2->Location = System::Drawing::Point(752, 168);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(188, 63);
            this->button2->TabIndex = 5;
            this->button2->Text = L"Gestión de Ventas";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &InicioFormulario::button2_Click);
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::SystemColors::Highlight;
            this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->ForeColor = System::Drawing::SystemColors::HighlightText;
            this->button3->Location = System::Drawing::Point(467, 302);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(233, 63);
            this->button3->TabIndex = 6;
            this->button3->Text = L"Gestión de Productos";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &InicioFormulario::button3_Click);
            // 
            // labelTop
            // 
            this->labelTop->AutoSize = true;
            this->labelTop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelTop->ForeColor = System::Drawing::SystemColors::HotTrack;
            this->labelTop->Location = System::Drawing::Point(400, 20);
            this->labelTop->Name = L"labelTop";
            this->labelTop->Size = System::Drawing::Size(232, 24);
            this->labelTop->TabIndex = 7;
            this->labelTop->Text = L"Abarrotes \"TIO LUCHO\"";
            // 
            // labelBottom
            // 
            this->labelBottom->AutoSize = true;
            this->labelBottom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelBottom->ForeColor = System::Drawing::SystemColors::Highlight;
            this->labelBottom->Location = System::Drawing::Point(428, 563);
            this->labelBottom->Name = L"labelBottom";
            this->labelBottom->Size = System::Drawing::Size(129, 16);
            this->labelBottom->TabIndex = 8;
            this->labelBottom->Text = L"© 2024 Efrain vitorino";
            // 
            // InicioFormulario
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1127, 610);
            this->Controls->Add(this->labelBottom);
            this->Controls->Add(this->labelTop);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"InicioFormulario";
            this->Text = L"InicioFormulario";
            this->Load += gcnew System::EventHandler(this, &InicioFormulario::InicioFormulario_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        this->AbrirPanel(gcnew aplicacion::ClientesFormulario());
    }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        this->AbrirPanel(gcnew aplicacion::FormularioVentas());
    }
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
        this->AbrirPanel(gcnew aplicacion::FormularioProductos());
    }

    private: System::Void AbrirPanel(Form^ formHijo)
    {
        OcultarControlesInicio();
        if (this->Controls->Count > 0)
            this->Controls->RemoveAt(0); // Podrías considerar usar `Controls->Clear()` si solo necesitas un control hijo a la vez
        formHijo->TopLevel = false;
        formHijo->Dock = DockStyle::Fill;
        formHijo->FormClosed += gcnew FormClosedEventHandler(this, &InicioFormulario::RestaurarControlesInicio);
        this->Controls->Add(formHijo);
        this->Tag = formHijo;
        formHijo->Show();
    }

    private: System::Void OcultarControlesInicio()
    {
        this->button1->Visible = false;
        this->button2->Visible = false;
        this->button3->Visible = false;
        this->labelTop->Visible = false;
        this->labelBottom->Visible = false;
    }

    private: System::Void RestaurarControlesInicio(System::Object^ sender, FormClosedEventArgs^ e)
    {
        // Restaurar los controles de inicio al cerrar el formulario hijo
        this->button1->Visible = true;
        this->button2->Visible = true;
        this->button3->Visible = true;
        this->labelTop->Visible = true;
        this->labelBottom->Visible = true;
    }

    private: System::Void InicioFormulario_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    };
}
