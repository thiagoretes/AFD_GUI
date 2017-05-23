#pragma once
#include "AFD.h"
#include <msclr\marshal_cppstd.h>

namespace Trabalho_5_Automatos {

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
	private: System::Windows::Forms::TextBox^  alfabetoTextBox;
	protected:
	private: System::Windows::Forms::TextBox^  qtdEstadosTextBox;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  criarAutomatoButton;
	private: System::Windows::Forms::ComboBox^  estadoInicialComboBox;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->alfabetoTextBox = (gcnew System::Windows::Forms::TextBox());
			this->qtdEstadosTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->criarAutomatoButton = (gcnew System::Windows::Forms::Button());
			this->estadoInicialComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// alfabetoTextBox
			// 
			this->alfabetoTextBox->Location = System::Drawing::Point(85, 19);
			this->alfabetoTextBox->Name = L"alfabetoTextBox";
			this->alfabetoTextBox->Size = System::Drawing::Size(121, 20);
			this->alfabetoTextBox->TabIndex = 0;
			// 
			// qtdEstadosTextBox
			// 
			this->qtdEstadosTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->qtdEstadosTextBox->Location = System::Drawing::Point(318, 19);
			this->qtdEstadosTextBox->Name = L"qtdEstadosTextBox";
			this->qtdEstadosTextBox->Size = System::Drawing::Size(100, 20);
			this->qtdEstadosTextBox->TabIndex = 1;
			this->qtdEstadosTextBox->Leave += gcnew System::EventHandler(this, &MyForm::qtdEstadosTextBox_Leave);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Alfabeto:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(209, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Número de Estados:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->criarAutomatoButton);
			this->groupBox1->Controls->Add(this->estadoInicialComboBox);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->alfabetoTextBox);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->qtdEstadosTextBox);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(433, 82);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Definições";
			// 
			// criarAutomatoButton
			// 
			this->criarAutomatoButton->Location = System::Drawing::Point(212, 42);
			this->criarAutomatoButton->Name = L"criarAutomatoButton";
			this->criarAutomatoButton->Size = System::Drawing::Size(207, 23);
			this->criarAutomatoButton->TabIndex = 6;
			this->criarAutomatoButton->Text = L"Criar";
			this->criarAutomatoButton->UseVisualStyleBackColor = true;
			this->criarAutomatoButton->Click += gcnew System::EventHandler(this, &MyForm::criarAutomatoButton_Click);
			// 
			// estadoInicialComboBox
			// 
			this->estadoInicialComboBox->FormattingEnabled = true;
			this->estadoInicialComboBox->Location = System::Drawing::Point(85, 42);
			this->estadoInicialComboBox->Name = L"estadoInicialComboBox";
			this->estadoInicialComboBox->Size = System::Drawing::Size(121, 21);
			this->estadoInicialComboBox->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 45);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Estado Inicial:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 100);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(433, 243);
			this->dataGridView1->TabIndex = 5;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Location = System::Drawing::Point(12, 349);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(433, 56);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Entrada: ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(211, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(207, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Processar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 22);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Palavra: ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(61, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(145, 20);
			this->textBox1->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(453, 418);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->Text = L"Editor de AFD - Trabalho 5";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void criarAutomatoButton_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Rows->Clear(); 
	dataGridView1->Columns->Clear();
	
	String ^ alfabeto = alfabetoTextBox->Text;
	String ^ alfabeto_aux = "";
	//Convertendo string da textbox e removendo repetidas
	for (int i = 0; i < alfabeto->Length; i++)
	{
		
		if ( System::Char::IsLetterOrDigit(alfabeto,i) || alfabeto[i] == '+' || alfabeto[i] == '-' || alfabeto[i] == '/' || alfabeto[i] == '.')
		{
			if (!alfabeto_aux->Contains(alfabeto[i] + ""))
			{
				alfabeto_aux = alfabeto_aux + alfabeto[i];
			}

		}
	}
	//FIM Conversão
	//dataGridView1
	DataGridViewColumn ^ col_estados = gcnew DataGridViewColumn;
	dataGridView1->Columns->Add("col_estados", "Estados");
	for (int i = 0; i < alfabeto_aux->Length; i++)
	{
		DataGridViewColumn ^ col = gcnew DataGridViewColumn;
		dataGridView1->Columns->Add("col", alfabeto_aux[i] + "");
		
	}
	DataGridViewCheckBoxColumn ^ col_eh_final = gcnew DataGridViewCheckBoxColumn;
	col_eh_final->HeaderText = "Estado Final";
	dataGridView1->Columns->Add(col_eh_final);
	int numero_estados = System::Convert::ToInt32(qtdEstadosTextBox->Text);
	//MessageBox::Show(alfabeto_aux);
	for (int i = 0; i < System::Convert::ToInt32(qtdEstadosTextBox->Text); i++)
	{
		DataGridViewRow ^ row = gcnew DataGridViewRow;
		//row->Cells[0] = "q" + i;
		dataGridView1->Rows->Add("q" + i);
	}

	

	

	
}
	public: void MarshalString(String ^ s, string& os) {
		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}
private: System::Void qtdEstadosTextBox_Leave(System::Object^  sender, System::EventArgs^  e) {
	int numero_estados = System::Convert::ToInt32(qtdEstadosTextBox->Text);
	
	for(int i = 0; i < numero_estados; i++)
	estadoInicialComboBox->Items->Add("q" + i);

}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	
	String ^ estado_inicial = (estadoInicialComboBox->GetItemText(estadoInicialComboBox->SelectedItem));
	string teste = "test";
	MarshalString(estado_inicial, teste);
	AFD afd = AFD(teste, false);
	for (int i = 0; i < dataGridView1->Rows->Count; i++)
	{
		string estado = "teste";
		MarshalString(dataGridView1->Rows[i]->Cells[0]->Value->ToString(), estado);
		if(dataGridView1->Rows[i]->Cells[dataGridView1->Columns->Count - 1]->Value)
			afd.add_estado(estado, (bool)(dataGridView1->Rows[i]->Cells[dataGridView1->Columns->Count - 1]->Value));
		else
			afd.add_estado(estado, false);
		for (int j = 1; j < dataGridView1->Columns->Count - 1; j++) {
			string transicao = "teste";
			string dest = "teste";
			MarshalString(dataGridView1->Columns[j]->HeaderText, transicao);
			
			MarshalString(dataGridView1->Rows[i]->Cells[j]->Value->ToString(), dest);
			//MessageBox::Show(dataGridView1->Rows[i]->Cells[j]->Value->ToString());
			afd.add_transicao(estado, transicao[0], dest);
		}
	}

	string entrada = "teste";
	MarshalString(textBox1->Text->ToString(), entrada);
	for (int i = 0; i < entrada.length(); i++)
	{
		afd.entrada(entrada[i]);
	}
	MessageBox::Show("Estado Atual: " + msclr::interop::marshal_as<System::String^>(afd.get_estado_atual()) + "\n" + "Final? " + (afd.eh_aceito()? "Sim":"Não"));
	
}
};
}
