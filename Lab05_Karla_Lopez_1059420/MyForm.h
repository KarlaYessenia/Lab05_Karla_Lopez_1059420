#pragma once

namespace Lab05KarlaLopez1059420 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace System::Diagnostics;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
	public:

		array<int^>^ arreglo1;
		array<int^>^ arreglo2;
		Hashtable^ hash = gcnew Hashtable();

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ Txtnumero;
	protected:




	private: System::Windows::Forms::TextBox^ TxtCantColum;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ Txtarreglo;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ BtnHash;

	private: System::Windows::Forms::Button^ BtnBinario;

	private: System::Windows::Forms::Button^ BtnSecuencial;
	private: System::Windows::Forms::Button^ BtnSalir;


	private: System::Windows::Forms::LinkLabel^ lbltiempo;
	private: System::Windows::Forms::LinkLabel^ lblpos;
	private: System::Windows::Forms::Button^ Btngenerar;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Btngenerar = (gcnew System::Windows::Forms::Button());
			this->TxtCantColum = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Txtarreglo = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->lbltiempo = (gcnew System::Windows::Forms::LinkLabel());
			this->lblpos = (gcnew System::Windows::Forms::LinkLabel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Txtnumero = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->BtnHash = (gcnew System::Windows::Forms::Button());
			this->BtnBinario = (gcnew System::Windows::Forms::Button());
			this->BtnSecuencial = (gcnew System::Windows::Forms::Button());
			this->BtnSalir = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->Btngenerar);
			this->groupBox1->Controls->Add(this->TxtCantColum);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(197, 21);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(275, 175);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Generar arreglo";
			// 
			// Btngenerar
			// 
			this->Btngenerar->Location = System::Drawing::Point(37, 109);
			this->Btngenerar->Name = L"Btngenerar";
			this->Btngenerar->Size = System::Drawing::Size(170, 44);
			this->Btngenerar->TabIndex = 2;
			this->Btngenerar->Text = L"Generar Arreglo";
			this->Btngenerar->UseVisualStyleBackColor = true;
			this->Btngenerar->Click += gcnew System::EventHandler(this, &MyForm::Btngenerar_Click);
			// 
			// TxtCantColum
			// 
			this->TxtCantColum->Location = System::Drawing::Point(60, 63);
			this->TxtCantColum->Name = L"TxtCantColum";
			this->TxtCantColum->Size = System::Drawing::Size(100, 22);
			this->TxtCantColum->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(212, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Coloque la cantidad de números";
			// 
			// Txtarreglo
			// 
			this->Txtarreglo->Location = System::Drawing::Point(12, 12);
			this->Txtarreglo->Name = L"Txtarreglo";
			this->Txtarreglo->Size = System::Drawing::Size(146, 569);
			this->Txtarreglo->TabIndex = 1;
			this->Txtarreglo->Text = L"";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->lbltiempo);
			this->groupBox2->Controls->Add(this->lblpos);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->Txtnumero);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Location = System::Drawing::Point(197, 226);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(275, 146);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Búsqueda";
			// 
			// lbltiempo
			// 
			this->lbltiempo->AutoSize = true;
			this->lbltiempo->Location = System::Drawing::Point(88, 107);
			this->lbltiempo->Name = L"lbltiempo";
			this->lbltiempo->Size = System::Drawing::Size(16, 17);
			this->lbltiempo->TabIndex = 7;
			this->lbltiempo->TabStop = true;
			this->lbltiempo->Text = L"0";
			// 
			// lblpos
			// 
			this->lblpos->AutoSize = true;
			this->lblpos->Location = System::Drawing::Point(88, 76);
			this->lblpos->Name = L"lblpos";
			this->lblpos->Size = System::Drawing::Size(16, 17);
			this->lblpos->TabIndex = 6;
			this->lblpos->TabStop = true;
			this->lblpos->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 107);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 17);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Tiempo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Posición";
			// 
			// Txtnumero
			// 
			this->Txtnumero->Location = System::Drawing::Point(134, 28);
			this->Txtnumero->Name = L"Txtnumero";
			this->Txtnumero->Size = System::Drawing::Size(100, 22);
			this->Txtnumero->TabIndex = 3;
			this->Txtnumero->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Número a buscar";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->BtnHash);
			this->groupBox3->Controls->Add(this->BtnBinario);
			this->groupBox3->Controls->Add(this->BtnSecuencial);
			this->groupBox3->Location = System::Drawing::Point(197, 387);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(275, 194);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Método";
			// 
			// BtnHash
			// 
			this->BtnHash->Location = System::Drawing::Point(134, 136);
			this->BtnHash->Name = L"BtnHash";
			this->BtnHash->Size = System::Drawing::Size(125, 39);
			this->BtnHash->TabIndex = 5;
			this->BtnHash->Text = L"Hash";
			this->BtnHash->UseVisualStyleBackColor = true;
			this->BtnHash->Click += gcnew System::EventHandler(this, &MyForm::BtnHash_Click);
			// 
			// BtnBinario
			// 
			this->BtnBinario->Location = System::Drawing::Point(17, 87);
			this->BtnBinario->Name = L"BtnBinario";
			this->BtnBinario->Size = System::Drawing::Size(125, 39);
			this->BtnBinario->TabIndex = 4;
			this->BtnBinario->Text = L"Binario";
			this->BtnBinario->UseVisualStyleBackColor = true;
			this->BtnBinario->Click += gcnew System::EventHandler(this, &MyForm::BtnBinario_Click);
			// 
			// BtnSecuencial
			// 
			this->BtnSecuencial->Location = System::Drawing::Point(134, 37);
			this->BtnSecuencial->Name = L"BtnSecuencial";
			this->BtnSecuencial->Size = System::Drawing::Size(125, 39);
			this->BtnSecuencial->TabIndex = 3;
			this->BtnSecuencial->Text = L"Secuencial";
			this->BtnSecuencial->UseVisualStyleBackColor = true;
			this->BtnSecuencial->Click += gcnew System::EventHandler(this, &MyForm::BtnSecuencial_Click);
			// 
			// BtnSalir
			// 
			this->BtnSalir->Location = System::Drawing::Point(33, 611);
			this->BtnSalir->Name = L"BtnSalir";
			this->BtnSalir->Size = System::Drawing::Size(125, 39);
			this->BtnSalir->TabIndex = 7;
			this->BtnSalir->Text = L"Salir";
			this->BtnSalir->UseVisualStyleBackColor = true;
			this->BtnSalir->Click += gcnew System::EventHandler(this, &MyForm::BtnSalir_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(496, 673);
			this->Controls->Add(this->BtnSalir);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->Txtarreglo);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void BtnSalir_Click(System::Object^ sender, System::EventArgs^ e) 
{
	MessageBox::Show("Espero, te halla servido, Feliz día!.", "Salir", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	Environment::Exit(0);
}


private: System::Void Btnarreglo_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Btngenerar_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		int cantidad = Convert::ToInt32(TxtCantColum->Text);
		if (cantidad>0 && cantidad<100)
		{
			arreglo1 = gcnew array<int^>(cantidad);
			arreglo2 = gcnew array<int^>(cantidad);
			System::Random^ random = gcnew System::Random();

			for (int i = 0; i < cantidad; i++) {
				int num = random->Next(1, 99);
				arreglo1[i] = num;
				arreglo2[i] = arreglo1[i];
				if (!hash->Contains(arreglo1[i])) {
					hash->Add(Convert::ToInt32(arreglo1[i]) % 99, Convert::ToString(arreglo1[i]));
				}
			}

			Txtarreglo->Text = "";
			for (int i = 0; i < arreglo1->Length; i++)
			{
				Txtarreglo->Text += Convert::ToString(arreglo1[i]) + "\n";
			}
		}
		else
		{
			MessageBox::Show("Ingrese solo valores entre 0-99", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("No ingreso correctamente los datos", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	TxtCantColum->Text = "";
}
int Secuencial(array<int^>^ arreglo1, int contador, int valor) {
    for (int i = 0; i < contador; i++) 
	{
		if (*arreglo1[i] == valor)
		{
			return i;
		}
    }
		   return -1;
}
private: System::Void BtnSecuencial_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		int numero = Convert::ToInt32(Txtnumero->Text);
		Stopwatch^ Stop = Stopwatch::StartNew();
		lblpos->Text = "" + Convert::ToString(Secuencial(arreglo1, arreglo1->Length, numero));
		Stop->Stop();
		lbltiempo->Text = "" + Convert::ToString(Stop->ElapsedMilliseconds);

	}
	catch (Exception^ e)
	{
		MessageBox::Show("No ingreso correctamente los datos", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
void burbuja(array<int^>^ arreglo2, int contador) 
{
	for (int i = 0; i < contador - 1; i++)
	{
	   for (int j = i + 1; j < contador; j++) 
	   {
		   if (*arreglo2[j] < *arreglo2[i]) 
		   {
			   int temporal = *arreglo2[j];
			   arreglo2[j] = arreglo2[i];
			   arreglo2[i] = temporal;
		   }
	   }
	}
}
int Binaria(array<int^>^ arreglo2, int inferior, int superior, int valor) 
{
	if (inferior > superior)
	{
		return -1;
	}
	int medio = inferior + (((superior + 1) - inferior) / 2);
	int pivote = *arreglo2[medio];
	if (pivote == valor) 
	{
		return medio;
	}
	else 
	{
	   if (pivote > valor)
	   {
		   return Binaria(arreglo2, inferior, medio - 1, valor);
	   }
	   
	   else
	   {
		   return Binaria(arreglo2, medio + 1, superior, valor);
	   }
				  
	}
}
private: System::Void BtnBinario_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		int numero = Convert::ToInt32(Txtnumero->Text);
		Stopwatch^ Stop = Stopwatch::StartNew();
		burbuja(arreglo2, arreglo2->Length);
		lblpos->Text = "" + Convert::ToString(Binaria(arreglo2, 0, arreglo2->Length - 1, numero));
		Stop->Stop();
		lbltiempo->Text = "" + Convert::ToString(Stop->ElapsedMilliseconds);

	}
	catch (Exception^ e)
	{
		MessageBox::Show("No ingreso correctamente los datos", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
int Hash(Hashtable^ hash, int contador, int valor) 
{
	if (Convert::ToInt32(hash[valor % contador]) == valor)
	{
		return (valor % contador);
	}
	else
	{
		return -1;
	}
			 
}
private: System::Void BtnHash_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		int numero = Convert::ToInt32(Txtnumero->Text);
		Stopwatch^ Stop = Stopwatch::StartNew();
		lblpos->Text = "" + Convert::ToString(Hash(hash, 99, numero));
		Stop->Stop();
		lbltiempo->Text = "" + Convert::ToString(Stop->ElapsedMilliseconds);

	}
	catch (Exception^ e)
	{
		MessageBox::Show("No ingreso correctamente los datos", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
