#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_Ccutting_tool_schema_arm
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_Ccutting_tool_schema_arm



namespace cutting_tool_schema_arm
{

class Ccutting_tool_schema_arm : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT Ccutting_tool_schema_arm(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT Ccutting_tool_schema_arm(Ccutting_tool_schema_arm const& init);
	void operator=(Ccutting_tool_schema_arm const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_Ccutting_tool_schema_arm); }
	MemberElement<CAlias_identification, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Alias_identification> Alias_identification;
	struct Alias_identification { typedef Iterator<CAlias_identification> iterator; };
	MemberElement<CApplication_context, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Application_context> Application_context;
	struct Application_context { typedef Iterator<CApplication_context> iterator; };
	MemberElement<CAssembly_association, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Assembly_association> Assembly_association;
	struct Assembly_association { typedef Iterator<CAssembly_association> iterator; };
	MemberElement<CAssembly_definition, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Assembly_definition> Assembly_definition;
	struct Assembly_definition { typedef Iterator<CAssembly_definition> iterator; };
	MemberElement<CCartesian_coordinate_space, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Cartesian_coordinate_space> Cartesian_coordinate_space;
	struct Cartesian_coordinate_space { typedef Iterator<CCartesian_coordinate_space> iterator; };
	MemberElement<CCartesian_coordinate_space_2d, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Cartesian_coordinate_space_2d> Cartesian_coordinate_space_2d;
	struct Cartesian_coordinate_space_2d { typedef Iterator<CCartesian_coordinate_space_2d> iterator; };
	MemberElement<CCartesian_coordinate_space_3d, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Cartesian_coordinate_space_3d> Cartesian_coordinate_space_3d;
	struct Cartesian_coordinate_space_3d { typedef Iterator<CCartesian_coordinate_space_3d> iterator; };
	MemberElement<CCartesian_point, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Cartesian_point> Cartesian_point;
	struct Cartesian_point { typedef Iterator<CCartesian_point> iterator; };
	MemberElement<CClassification_association, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Classification_association> Classification_association;
	struct Classification_association { typedef Iterator<CClassification_association> iterator; };
	MemberElement<CClassification_association_relationship, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Classification_association_relationship> Classification_association_relationship;
	struct Classification_association_relationship { typedef Iterator<CClassification_association_relationship> iterator; };
	MemberElement<CClassification_attribute, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Classification_attribute> Classification_attribute;
	struct Classification_attribute { typedef Iterator<CClassification_attribute> iterator; };
	MemberElement<CClassification_system, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Classification_system> Classification_system;
	struct Classification_system { typedef Iterator<CClassification_system> iterator; };
	MemberElement<CCoating, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Coating> Coating;
	struct Coating { typedef Iterator<CCoating> iterator; };
	MemberElement<CCoupling, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Coupling> Coupling;
	struct Coupling { typedef Iterator<CCoupling> iterator; };
	MemberElement<CCutting_condition, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Cutting_condition> Cutting_condition;
	struct Cutting_condition { typedef Iterator<CCutting_condition> iterator; };
	MemberElement<CCutting_data_association, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Cutting_data_association> Cutting_data_association;
	struct Cutting_data_association { typedef Iterator<CCutting_data_association> iterator; };
	MemberElement<CDate_time, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Date_time> Date_time;
	struct Date_time { typedef Iterator<CDate_time> iterator; };
	MemberElement<CDefault_language_stringType, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Default_language_string> Default_language_string;
	struct Default_language_string { typedef Iterator<CDefault_language_stringType> iterator; };
	MemberElement<CDigital_document, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Digital_document> Digital_document;
	struct Digital_document { typedef Iterator<CDigital_document> iterator; };
	MemberElement<CDigital_file, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Digital_file> Digital_file;
	struct Digital_file { typedef Iterator<CDigital_file> iterator; };
	MemberElement<CDin4000_reference, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Din4000_reference> Din4000_reference;
	struct Din4000_reference { typedef Iterator<CDin4000_reference> iterator; };
	MemberElement<CDirection, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Direction> Direction;
	struct Direction { typedef Iterator<CDirection> iterator; };
	MemberElement<CDocument, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Document> Document;
	struct Document { typedef Iterator<CDocument> iterator; };
	MemberElement<CDocument_assignment, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Document_assignment> Document_assignment;
	struct Document_assignment { typedef Iterator<CDocument_assignment> iterator; };
	MemberElement<CDocument_content_property, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Document_content_property> Document_content_property;
	struct Document_content_property { typedef Iterator<CDocument_content_property> iterator; };
	MemberElement<CDocument_creation_property, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Document_creation_property> Document_creation_property;
	struct Document_creation_property { typedef Iterator<CDocument_creation_property> iterator; };
	MemberElement<CDocument_file, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Document_file> Document_file;
	struct Document_file { typedef Iterator<CDocument_file> iterator; };
	MemberElement<CDocument_format_property, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Document_format_property> Document_format_property;
	struct Document_format_property { typedef Iterator<CDocument_format_property> iterator; };
	MemberElement<CDocument_location_property, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Document_location_property> Document_location_property;
	struct Document_location_property { typedef Iterator<CDocument_location_property> iterator; };
	MemberElement<CDocument_representation, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Document_representation> Document_representation;
	struct Document_representation { typedef Iterator<CDocument_representation> iterator; };
	MemberElement<CDocument_size_property, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Document_size_property> Document_size_property;
	struct Document_size_property { typedef Iterator<CDocument_size_property> iterator; };
	MemberElement<CDocument_type_property, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Document_type_property> Document_type_property;
	struct Document_type_property { typedef Iterator<CDocument_type_property> iterator; };
	MemberElement<CDocument_version, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Document_version> Document_version;
	struct Document_version { typedef Iterator<CDocument_version> iterator; };
	MemberElement<CDocument_version_relationship, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Document_version_relationship> Document_version_relationship;
	struct Document_version_relationship { typedef Iterator<CDocument_version_relationship> iterator; };
	MemberElement<CDuration, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Duration> Duration;
	struct Duration { typedef Iterator<CDuration> iterator; };
	MemberElement<CEffectivity, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Effectivity> Effectivity;
	struct Effectivity { typedef Iterator<CEffectivity> iterator; };
	MemberElement<CEffectivity_assignment, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Effectivity_assignment> Effectivity_assignment;
	struct Effectivity_assignment { typedef Iterator<CEffectivity_assignment> iterator; };
	MemberElement<CEffectivity_relationship, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Effectivity_relationship> Effectivity_relationship;
	struct Effectivity_relationship { typedef Iterator<CEffectivity_relationship> iterator; };
	MemberElement<CExternal_file_id_and_location, _altova_mi_altova_Ccutting_tool_schema_arm_altova_External_file_id_and_location> External_file_id_and_location;
	struct External_file_id_and_location { typedef Iterator<CExternal_file_id_and_location> iterator; };
	MemberElement<CExternal_geometric_model, _altova_mi_altova_Ccutting_tool_schema_arm_altova_External_geometric_model> External_geometric_model;
	struct External_geometric_model { typedef Iterator<CExternal_geometric_model> iterator; };
	MemberElement<CExternal_library_reference, _altova_mi_altova_Ccutting_tool_schema_arm_altova_External_library_reference> External_library_reference;
	struct External_library_reference { typedef Iterator<CExternal_library_reference> iterator; };
	MemberElement<CExternal_model, _altova_mi_altova_Ccutting_tool_schema_arm_altova_External_model> External_model;
	struct External_model { typedef Iterator<CExternal_model> iterator; };
	MemberElement<CExternal_picture, _altova_mi_altova_Ccutting_tool_schema_arm_altova_External_picture> External_picture;
	struct External_picture { typedef Iterator<CExternal_picture> iterator; };
	MemberElement<CFitting_bounds, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Fitting_bounds> Fitting_bounds;
	struct Fitting_bounds { typedef Iterator<CFitting_bounds> iterator; };
	MemberElement<CGeneral_classification, _altova_mi_altova_Ccutting_tool_schema_arm_altova_General_classification> General_classification;
	struct General_classification { typedef Iterator<CGeneral_classification> iterator; };
	MemberElement<CGeneral_classification_hierarchy, _altova_mi_altova_Ccutting_tool_schema_arm_altova_General_classification_hierarchy> General_classification_hierarchy;
	struct General_classification_hierarchy { typedef Iterator<CGeneral_classification_hierarchy> iterator; };
	MemberElement<CGeometric_model_relationship_with_transformation, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Geometric_model_relationship_with_transformation> Geometric_model_relationship_with_transformation;
	struct Geometric_model_relationship_with_transformation { typedef Iterator<CGeometric_model_relationship_with_transformation> iterator; };
	MemberElement<CGrade, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Grade> Grade;
	struct Grade { typedef Iterator<CGrade> iterator; };
	MemberElement<CGrade_relationship, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Grade_relationship> Grade_relationship;
	struct Grade_relationship { typedef Iterator<CGrade_relationship> iterator; };
	MemberElement<CItem, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Item> Item;
	struct Item { typedef Iterator<CItem> iterator; };
	MemberElement<CItem_characteristic_association, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Item_characteristic_association> Item_characteristic_association;
	struct Item_characteristic_association { typedef Iterator<CItem_characteristic_association> iterator; };
	MemberElement<CItem_definition, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Item_definition> Item_definition;
	struct Item_definition { typedef Iterator<CItem_definition> iterator; };
	MemberElement<CItem_definition_relationship, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Item_definition_relationship> Item_definition_relationship;
	struct Item_definition_relationship { typedef Iterator<CItem_definition_relationship> iterator; };
	MemberElement<CItem_instance, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Item_instance> Item_instance;
	struct Item_instance { typedef Iterator<CItem_instance> iterator; };
	MemberElement<CItem_structure_association, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Item_structure_association> Item_structure_association;
	struct Item_structure_association { typedef Iterator<CItem_structure_association> iterator; };
	MemberElement<CItem_version, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Item_version> Item_version;
	struct Item_version { typedef Iterator<CItem_version> iterator; };
	MemberElement<CItem_version_relationship, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Item_version_relationship> Item_version_relationship;
	struct Item_version_relationship { typedef Iterator<CItem_version_relationship> iterator; };
	MemberElement<CLanguage, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Language> Language;
	struct Language { typedef Iterator<CLanguage> iterator; };
	MemberElement<CLimits_and_fits, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Limits_and_fits> Limits_and_fits;
	struct Limits_and_fits { typedef Iterator<CLimits_and_fits> iterator; };
	MemberElement<CLocation, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Location> Location;
	struct Location { typedef Iterator<CLocation> iterator; };
	MemberElement<CMated_item_relationship, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Mated_item_relationship> Mated_item_relationship;
	struct Mated_item_relationship { typedef Iterator<CMated_item_relationship> iterator; };
	MemberElement<CMaterial_designation, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Material_designation> Material_designation;
	struct Material_designation { typedef Iterator<CMaterial_designation> iterator; };
	MemberElement<CMating_association, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Mating_association> Mating_association;
	struct Mating_association { typedef Iterator<CMating_association> iterator; };
	MemberElement<CMating_definition, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Mating_definition> Mating_definition;
	struct Mating_definition { typedef Iterator<CMating_definition> iterator; };
	MemberElement<CMulti_language_string, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Multi_language_string> Multi_language_string;
	struct Multi_language_string { typedef Iterator<CMulti_language_string> iterator; };
	MemberElement<CNamed_size, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Named_size> Named_size;
	struct Named_size { typedef Iterator<CNamed_size> iterator; };
	MemberElement<CNumerical_value, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Numerical_value> Numerical_value;
	struct Numerical_value { typedef Iterator<CNumerical_value> iterator; };
	MemberElement<COrganization, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Organization> Organization;
	struct Organization { typedef Iterator<COrganization> iterator; };
	MemberElement<CPerson, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Person> Person;
	struct Person { typedef Iterator<CPerson> iterator; };
	MemberElement<CPerson_in_organization, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Person_in_organization> Person_in_organization;
	struct Person_in_organization { typedef Iterator<CPerson_in_organization> iterator; };
	MemberElement<CPerson_organization_assignment, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Person_organization_assignment> Person_organization_assignment;
	struct Person_organization_assignment { typedef Iterator<CPerson_organization_assignment> iterator; };
	MemberElement<CPhysical_document, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Physical_document> Physical_document;
	struct Physical_document { typedef Iterator<CPhysical_document> iterator; };
	MemberElement<CPhysical_file, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Physical_file> Physical_file;
	struct Physical_file { typedef Iterator<CPhysical_file> iterator; };
	MemberElement<CPhysical_item, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Physical_item> Physical_item;
	struct Physical_item { typedef Iterator<CPhysical_item> iterator; };
	MemberElement<CPhysical_item_definition, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Physical_item_definition> Physical_item_definition;
	struct Physical_item_definition { typedef Iterator<CPhysical_item_definition> iterator; };
	MemberElement<CPhysical_item_location_association, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Physical_item_location_association> Physical_item_location_association;
	struct Physical_item_location_association { typedef Iterator<CPhysical_item_location_association> iterator; };
	MemberElement<CPhysical_item_state_association, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Physical_item_state_association> Physical_item_state_association;
	struct Physical_item_state_association { typedef Iterator<CPhysical_item_state_association> iterator; };
	MemberElement<CPhysical_item_structure_association, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Physical_item_structure_association> Physical_item_structure_association;
	struct Physical_item_structure_association { typedef Iterator<CPhysical_item_structure_association> iterator; };
	MemberElement<CPhysical_item_version, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Physical_item_version> Physical_item_version;
	struct Physical_item_version { typedef Iterator<CPhysical_item_version> iterator; };
	MemberElement<CPlib_class_reference, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Plib_class_reference> Plib_class_reference;
	struct Plib_class_reference { typedef Iterator<CPlib_class_reference> iterator; };
	MemberElement<CPlib_property_reference, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Plib_property_reference> Plib_property_reference;
	struct Plib_property_reference { typedef Iterator<CPlib_property_reference> iterator; };
	MemberElement<CPlus_minus_bounds, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Plus_minus_bounds> Plus_minus_bounds;
	struct Plus_minus_bounds { typedef Iterator<CPlus_minus_bounds> iterator; };
	MemberElement<CProperty, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Property> Property;
	struct Property { typedef Iterator<CProperty> iterator; };
	MemberElement<CProperty_relationship, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Property_relationship> Property_relationship;
	struct Property_relationship { typedef Iterator<CProperty_relationship> iterator; };
	MemberElement<CProperty_value, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Property_value> Property_value;
	struct Property_value { typedef Iterator<CProperty_value> iterator; };
	MemberElement<CProperty_value_association, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Property_value_association> Property_value_association;
	struct Property_value_association { typedef Iterator<CProperty_value_association> iterator; };
	MemberElement<CProperty_value_representation, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Property_value_representation> Property_value_representation;
	struct Property_value_representation { typedef Iterator<CProperty_value_representation> iterator; };
	MemberElement<CProperty_value_representation_relationship, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Property_value_representation_relationship> Property_value_representation_relationship;
	struct Property_value_representation_relationship { typedef Iterator<CProperty_value_representation_relationship> iterator; };
	MemberElement<CQuantified_instance, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Quantified_instance> Quantified_instance;
	struct Quantified_instance { typedef Iterator<CQuantified_instance> iterator; };
	MemberElement<CRealized_item_association, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Realized_item_association> Realized_item_association;
	struct Realized_item_association { typedef Iterator<CRealized_item_association> iterator; };
	MemberElement<CRectangular_size, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Rectangular_size> Rectangular_size;
	struct Rectangular_size { typedef Iterator<CRectangular_size> iterator; };
	MemberElement<CSpecific_item_classification, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Specific_item_classification> Specific_item_classification;
	struct Specific_item_classification { typedef Iterator<CSpecific_item_classification> iterator; };
	MemberElement<CSpecific_item_classification_hierarchy, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Specific_item_classification_hierarchy> Specific_item_classification_hierarchy;
	struct Specific_item_classification_hierarchy { typedef Iterator<CSpecific_item_classification_hierarchy> iterator; };
	MemberElement<CState, _altova_mi_altova_Ccutting_tool_schema_arm_altova_State> State;
	struct State { typedef Iterator<CState> iterator; };
	MemberElement<CString_value, _altova_mi_altova_Ccutting_tool_schema_arm_altova_String_value> String_value;
	struct String_value { typedef Iterator<CString_value> iterator; };
	MemberElement<CString_with_language, _altova_mi_altova_Ccutting_tool_schema_arm_altova_String_with_language> String_with_language;
	struct String_with_language { typedef Iterator<CString_with_language> iterator; };
	MemberElement<CSubstrate, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Substrate> Substrate;
	struct Substrate { typedef Iterator<CSubstrate> iterator; };
	MemberElement<CTransformation, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Transformation> Transformation;
	struct Transformation { typedef Iterator<CTransformation> iterator; };
	MemberElement<CTransformation_2d, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Transformation_2d> Transformation_2d;
	struct Transformation_2d { typedef Iterator<CTransformation_2d> iterator; };
	MemberElement<CTransformation_3d, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Transformation_3d> Transformation_3d;
	struct Transformation_3d { typedef Iterator<CTransformation_3d> iterator; };
	MemberElement<CUnit, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Unit> Unit;
	struct Unit { typedef Iterator<CUnit> iterator; };
	MemberElement<CValue_limit, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Value_limit> Value_limit;
	struct Value_limit { typedef Iterator<CValue_limit> iterator; };
	MemberElement<CValue_limitation, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Value_limitation> Value_limitation;
	struct Value_limitation { typedef Iterator<CValue_limitation> iterator; };
	MemberElement<CValue_list, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Value_list> Value_list;
	struct Value_list { typedef Iterator<CValue_list> iterator; };
	MemberElement<CValue_range, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Value_range> Value_range;
	struct Value_range { typedef Iterator<CValue_range> iterator; };
	MemberElement<CValue_with_unit, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Value_with_unit> Value_with_unit;
	struct Value_with_unit { typedef Iterator<CValue_with_unit> iterator; };
	MemberElement<CWorkpiece_feature, _altova_mi_altova_Ccutting_tool_schema_arm_altova_Workpiece_feature> Workpiece_feature;
	struct Workpiece_feature { typedef Iterator<CWorkpiece_feature> iterator; };
	MemberElement<CuosType, _altova_mi_altova_Ccutting_tool_schema_arm_altova_uos> uos;
	struct uos { typedef Iterator<CuosType> iterator; };
	MemberElement<exp::Cfile_description, _altova_mi_altova_Ccutting_tool_schema_arm_altova_file_description> file_description;
	struct file_description { typedef Iterator<exp::Cfile_description> iterator; };
	MemberElement<exp::Cfile_name, _altova_mi_altova_Ccutting_tool_schema_arm_altova_file_name> file_name;
	struct file_name { typedef Iterator<exp::Cfile_name> iterator; };
	MemberElement<exp::Cfile_schema, _altova_mi_altova_Ccutting_tool_schema_arm_altova_file_schema> file_schema;
	struct file_schema { typedef Iterator<exp::Cfile_schema> iterator; };
	MemberElement<CheaderType, _altova_mi_altova_Ccutting_tool_schema_arm_altova_header> header;
	struct header { typedef Iterator<CheaderType> iterator; };
	MemberElement<Cschema_nameType, _altova_mi_altova_Ccutting_tool_schema_arm_altova_schema_name> schema_name;
	struct schema_name { typedef Iterator<Cschema_nameType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();

	// document functions
	cutting_tool_schema_arm_EXPORT static Ccutting_tool_schema_arm LoadFromFile(const string_type& fileName);
	cutting_tool_schema_arm_EXPORT static Ccutting_tool_schema_arm LoadFromString(const string_type& xml);
	cutting_tool_schema_arm_EXPORT static Ccutting_tool_schema_arm LoadFromBinary(const std::vector<unsigned char>& data);
	cutting_tool_schema_arm_EXPORT void SaveToFile( const string_type& fileName, bool prettyPrint );
	cutting_tool_schema_arm_EXPORT void SaveToFile( const string_type& fileName, bool prettyPrint, const string_type& encoding );
	cutting_tool_schema_arm_EXPORT void SaveToFile( const string_type& fileName, bool prettyPrint, const string_type& encoding, bool bBigEndian, bool bBOM );
	cutting_tool_schema_arm_EXPORT string_type SaveToString(bool prettyPrint);
	cutting_tool_schema_arm_EXPORT std::vector<unsigned char> SaveToBinary(bool prettyPrint);
	cutting_tool_schema_arm_EXPORT std::vector<unsigned char> SaveToBinary(bool prettyPrint, const string_type& encoding);
	cutting_tool_schema_arm_EXPORT std::vector<unsigned char> SaveToBinary(bool prettyPrint, const string_type& encoding, bool bBigEndian, bool bBOM);
 	cutting_tool_schema_arm_EXPORT static Ccutting_tool_schema_arm CreateDocument();
	cutting_tool_schema_arm_EXPORT void DestroyDocument();
	cutting_tool_schema_arm_EXPORT void SetDTDLocation(const string_type& dtdLocation);
	cutting_tool_schema_arm_EXPORT void SetSchemaLocation(const string_type& schemaLocation);
protected:
	MsxmlTreeOperations::DocumentType GetDocumentNode() { return (MsxmlTreeOperations::DocumentType)m_node; }
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_Ccutting_tool_schema_arm
